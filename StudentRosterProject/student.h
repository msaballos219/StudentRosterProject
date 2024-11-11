#pragma once

#include <string>
#include <array>
#include "degree.h"

class Student {

	// private member variables
private:
	std::string studentID;
	std::string firstName;
	std::string lastName;
	std::string emailAddress;
	int age;
	std::array<int, 3> daysToFinish;
	DegreeProgram degreeProgram;

	// public variables
public:
	Student(
		std::string studentID,
		std::string firstName,
		std::string lastName,
		std::string emailAddress,
		int age,
		std::array<int, 3> daysToFinish,
		DegreeProgram degreeProgram);

	// getters
	std::string getStudentID() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getEmailAddress() const;
	int getAge() const;
	std::array<int, 3> getDaysToFinish() const;
	DegreeProgram getDegreeProgram() const;


};

