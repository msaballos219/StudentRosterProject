#pragma once

#include <string>
#include <array>
#include "degree.h"

class Student {
private:
	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	int age;
	std::array<int, 3> daysToFinish;
	DegreeProgram degreeProgram;
};