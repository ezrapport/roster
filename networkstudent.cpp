#include "networkstudent.h"
#include "degree.h"
#include "student.h"
#include "roster.h"
#include <string>

class NetworkStudent : public Student

{
public:

	NetworkStudent(string studentID, string firstName, string lastName, string email, int age, int daysInCourse[3], Degree degreeType);

	~NetworkStudent();


	void getDegreeType();
	void print();

private:
	string degreeType;
};


