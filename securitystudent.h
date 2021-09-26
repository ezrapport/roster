#ifndef Security_HEADER
#define Security_HEADER

#include "student.h"
#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

class SecurityStudent : public Student {
public:
	virtual Degree getdegreeType();
	using Student::Student;
private:
	Degree DegreeType = SECURITY;
};

#endif