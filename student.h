#ifndef Student_HEADER
#define Student_HEADER

#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

class Student {
public:
	//Accessors
	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getAge();
	int* getDaysInCourse();
	Degree getDegreeType();

	//Mutators
	void setStudentID(string);
	void setFirstName(string);
	void setLastName(string);
	void setEmail(string);
	void setAge(int);
	void setDaysInCourse(int[3]);
	void setDegreeType(Degree);

	//Constructor
	Student(string, string, string, string, int, int*, Degree);

	virtual ~Student();

	//Virtual
	virtual void print();

private:
	string StudentID, FirstName, LastName, Email;
	int Age, DaysInCourse[3];
	Degree degreeType;
};

#endif