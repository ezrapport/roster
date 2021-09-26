#ifndef Network_HEADER
#define Network_HEADER
#include "student.h"
#include <iostream>
#include <string>
#include "degree.h"
using namespace std;


class NetworkStudent : public Student {
public:
	virtual Degree getDegreeType();
	using Student::Student;
private:
	Degree degreeType = NETWORK;
};

#endif