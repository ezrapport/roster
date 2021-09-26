/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

 /*
  * File:   student.cpp
  * Author: Ezra Rapport
  *
  * Created on July 11, 2019, 10:34 PM
  */

#include <iostream>
#include "student.h"
#include "roster.h"
using namespace Roster;

  // Accessors
string Student::getStudentID()
{
	return StudentID;
}

string Student::getFirstName()
{
	return FirstName;
}

string Student::getLastName()
{
	return LastName;
}

string Student::getEmail()
{
	return Email;
}

int Student::getAge()
{
	return Age;
}

int* Student::getDaysInCourse()
{
	return DaysInCourse;
}

Degree Student::getDegreeType()
{
	return Degree();
}

//Mutators
void Student::setStudentID(string studentID)
{
	StudentID = studentID;
}


void Student::setFirstName(string firstName)
{
	FirstName = firstName;
}

void Student::setLastName(string lastName)
{
	LastName = lastName;
}


void Student::setEmail(string email)
{
	Email = email;
}


void Student::setAge(int age)
{
	Age = age;
}

void Student::setDaysInCourse(int* daysInCourse)
{
	for (int i = 0; i < 3; i++) {
		DaysInCourse[i] = daysInCourse[i];
	}
}


void Student::setDegreeType(Degree degreeType)
{
	Degree = degreeType;
}

Student::Student(string studentID, string firstName, string lastName, string email, int age, int daysInCourse[3], Degree

	degreeType)
{
	setStudentID(studentID);
	setFirstName(firstName);
	setLastName(lastName);
	setEmail(email);
	setAge(age);
	setDegreeType(degreeType);
	setDaysInCourse(daysInCourse);
	setDegreeType(degreeType);
}

void Student::print()
{
	int* daysInCourse = getDaysInCourse();

	cout << getStudentID() << "\t";
	cout << "First Name: " << getFirstName() << "\t";
	cout << "Last Name: " << getLastName() << "\t";
	cout << "Email: " << getEmail() << "\t";
	cout << "Age: " << getAge() << "\t";
	cout << "daysInCourse: {" << daysInCourse[0] << "," << daysInCourse[1] << "," << daysInCourse[2] << "}\t";

	cout << "Degree Program: ";
	switch (getDegreeType()) {
	case 0: cout << "Security";
		break;
	case 1: cout << "Networking";
		break;
	case 2: cout << "Software";
		break;
	case 4: cout << "Error";
		break;
	}
	cout << "\n";
}

Degree Student::getDegreeType()
{
	return;
}

Student::~Student()
{
}

