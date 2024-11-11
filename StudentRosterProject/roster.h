#pragma once
#define ROSTER_H

#include <string>
#include <array>
#include "student.h"

class Roster {
private:
	static const int maxStudents = 15;
	Student* classRosterArray[maxStudents];
	
	int lastIndex; // keeps track of last filled index

public:
	Roster();

    ~Roster();

    void add(std::string studentID, std::string firstName, std::string lastName,
        std::string emailAddress, int age, int daysInCourse1, int daysInCourse2,
        int daysInCourse3, DegreeProgram degreeProgram);
    void remove(std::string studentID);
    void printAll() const;
    void printAverageDaysInCourse(std::string studentID) const;
    void printInvalidEmails() const;
    void printByDegreeProgram(DegreeProgram degreeProgram) const;

};