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

	// assessors/getters
	std::string getStudentID() const;
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getEmailAddress() const;
	int getAge() const;
	std::array<int, 3> getDaysToFinish() const;
	DegreeProgram getDegreeProgram() const;

	// mutators/setters
	void setStudentID(const std::string& studentID);
	void setFirstName(const std::string& firstName);
	void setLastName(const std::string& lastName);
	void setEmailAddress(const std::string& emailAddress);
	void setAge(int age);
	void setDaysToFinish(const std::array<int, 3>& daysToFinish);
	void setDegreeProgram(DegreeProgram degreeProgram);

	void print() const;
};

