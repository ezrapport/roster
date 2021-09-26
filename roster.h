#pragma once
#ifndef ROSTER_H
#define ROSTER_H
#include <string>
#include "degree.h"
#include <array>

using std::string;
using namespace std;


const string studentData[] = {
							   "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
							   "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
							   "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
							   "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
							   "A5,Ezra,Rapport,arappor@wgu.edu,27, 32, 24, 36,SOFTWARE",
};
const int MAX = 5;

class Roster
{
public:
	Roster();
	~Roster();

	void add(string studentID, string firstName,
		string lastName, string email,
		int age, int daysInCourse1, int daysInCourse2,
		int daysInCourse3, string degree_name);
	int  create_students();
	void remove(string);
	void printAll();
	void printDaysInCourse(string);
	void printAverageDaysInCourse(string);
	void printInvalidEmails();
	void printByDegreeType(Degree);

private:
	string   studentID;
	string   firstName;
	string   lastName;
	string   email;
	int      age;
	int      DaysinCourse[3]; // array of number of days to complete each course
	Student* classRosterArray[MAX];
};

#endif
