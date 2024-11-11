#include "roster.h"
#include <iostream>
#include <sstream>

// Constructor 
Roster::Roster() : lastIndex(-1) {
    for (int i = 0; i < maxStudents; ++i) {
        classRosterArray[i] = nullptr;
    }
}

// Destructor
Roster::~Roster() {
    for (int i = 0; i <= lastIndex; ++i) {
        delete classRosterArray[i];
        classRosterArray[i] = nullptr;
    }
}

// Add student
void Roster::add(std::string studentID, std::string firstName, std::string lastName,
    std::string emailAddress, int age, int daysInCourse1, int daysInCourse2,
    int daysInCourse3, DegreeProgram degreeProgram) {
    if (lastIndex < maxStudents - 1) {
        lastIndex++;
        classRosterArray[lastIndex] = new Student(studentID, firstName, lastName, emailAddress, age,
            { daysInCourse1, daysInCourse2, daysInCourse3 },
            degreeProgram);
    }
}

// Remove student
void Roster::remove(std::string studentID) {
    bool found = false;
    for (int i = 0; i <= lastIndex; ++i) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            delete classRosterArray[i];
            classRosterArray[i] = classRosterArray[lastIndex];
            classRosterArray[lastIndex] = nullptr;
            lastIndex--;
            found = true;
            break;
        }
    }
    if (!found) {
        std::cout << "Student with ID " << studentID << " not found. Please, try again." << std::endl;
    }
}

// prints all records
void Roster::printAll() const {
    for (int i = 0; i <= lastIndex; ++i) {
        classRosterArray[i]->print();
    }
}

// prints the average days in course
void Roster::printAverageDaysInCourse(std::string studentID) const {
    for (int i = 0; i <= lastIndex; ++i) {
        if (classRosterArray[i]->getStudentID() == studentID) {
            auto days = classRosterArray[i]->getDaysToComplete();
            double average = (days[0] + days[1] + days[2]) / 3.0;
            std::cout << "Student ID: " << studentID << ", average days in course: " << average << std::endl;
            return;
        }
    }
    std::cout << "Student with ID " << studentID << " not found. Please, try again." << std::endl;
}

// 
void Roster::printInvalidEmails() const {
    for (int i = 0; i <= lastIndex; ++i) {
        std::string email = classRosterArray[i]->getEmailAddress();

        // npos is used to verify substring presence or exclude spaces.
        if (email.find('@') == std::string::npos ||
            email.find('.') == std::string::npos ||
            email.find(' ') != std::string::npos) {
            std::cout << "Invalid email: " << email << std::endl;
        }
    }
}

// prints student information based on degree program
void Roster::printByDegreeProgram(DegreeProgram degreeProgram) const {
    for (int i = 0; i <= lastIndex; ++i) {
        if (classRosterArray[i]->getDegreeProgram() == degreeProgram) {
            classRosterArray[i]->print();
        }
    }
}
