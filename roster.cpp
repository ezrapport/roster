#include <cstddef>
#include <iostream>
#include <string.h>

#include "softwareStudent.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "roster.h"

using namespace std;

Roster::Roster()
{
	this->create_students();
}

Roster::~Roster() { }

int Roster::create_students()
{
	for (int i = 0; i < MAX; i++)
	{
		string firstName, lastName, email, age, DaysinCourse, studentID, degreeType, line;
		int    age, d1, d2, d3;
		char* token;

		line = studentData[i];
		char   delimiter[] = ",";
		int    i_word = 0;
		string a_student[9];

		token = strtok(&line[0], delimiter);

		while (token != NULL && i_word < 9)
		{
			a_student[i_word] = token;
			i_word++;
			token = strtok(NULL, delimiter);
		}

		d1 = atoi(a_student[5].c_str());
		d2 = atoi(a_student[6].c_str());
		d3 = atoi(a_student[7].c_str());
		int num_days[3] = { d1, d2, d3 };

		studentID = a_student[0];
		firstName = a_student[1];
		lastName = a_student[2];
		email = a_student[3];
		age = atoi(a_student[4].c_str());
		degreeType = a_student[8];

		Student* s = new Student(firstName, lastName, email, age,
			DaysinCourse, studentID, degreeType);

		if (strcmp(a_student[8].c_str(), "SOFTWARE"))
		{
			SoftwareStudent sw(firstName, lastName, email, age,
				DaysinCourse, studentID, degreeType);
			s = &sw;
		}

		if (strcmp(a_student[8].c_str(), "SECURITY"))
		{
			SecurityStudent ss(firstName, lastName, email, age,
				DaysinCourse, studentID, degreeType);
			s = &ss;
		}

		if (strcmp(a_student[8].c_str(), "NETWORK"))
		{
			NetworkStudent  ns(firstName, lastName, email, age,
				DaysinCourse, studentID, degreeType);
			s = &ns;
		}

		classRosterArray[i] = new Student(*s);
	}

	return 0;
}


void Roster::add(string studentID, string firstName, string lastName,
	string emailAddress, int age, int daysInCourse1, int daysInCourse2,
	int daysInCourse3, string degreeType)
{

}

void Roster::printInvalidEmails()
{
}

void Roster::printAverageDaysInCourse(string student_id)
{
}

// print should do:
// [tab] First Name: John [tab] Last Name: Smith [tab] Age: 20
// [tab]daysInCourse: {35, 40, 55} Degree Program: Security.
void Roster::printAll()
{
	for (int c = 0; c < MAX; c++)
	{
		this->classRosterArray[c]->print();
	}
}

void Roster::printDaysInCourse(string) { }

void Roster::printDegreeType(Degree) { }

// main -- entrance to the whole app.
int main()
{
	cout << "Scripting and Programming - Applications C867" << endl;
	cout << "C++" << endl;
	cout << "Student ID# 000927044" << endl;
	cout << "Aisha \"Ezra\" Rapport" << endl;
	cout << endl;
	cout << "\n";

	Roster classRoster;

	classRoster.printAll();
	return ;
}