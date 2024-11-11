#include "student.h"
#include <iostream>

Student::Student(
    std::string studentID, 
    std::string firstName, 
    std::string lastName,       
    std::string emailAddress, 
    int age, 
    
    std::array<int, 3> daysToFinish, 
    DegreeProgram degreeProgram): 
    studentID(studentID), 
    firstName(firstName), 
    lastName(lastName),
    emailAddress(emailAddress), 
    age(age), 
    daysToFinish(daysToFinish),
    degreeProgram(degreeProgram) {}

    // Getter functions
    std::string Student::getStudentID() const { return studentID; }
    std::string Student::getFirstName() const { return firstName; }
    std::string Student::getLastName() const { return lastName; }
    std::string Student::getEmailAddress() const { return emailAddress; }
    int Student::getAge() const { return age; }
    std::array<int, 3> Student::getDaysToFinish() const { return daysToFinish; }
    DegreeProgram Student::getDegreeProgram() const { return degreeProgram; }

    // Setter functions
    void Student::setStudentID(const std::string& studentID) { this->studentID = studentID; }
    void Student::setFirstName(const std::string& firstName) { this->firstName = firstName; }
    void Student::setLastName(const std::string& lastName) { this->lastName = lastName; }
    void Student::setEmailAddress(const std::string& emailAddress) { this->emailAddress = emailAddress; }
    void Student::setAge(int age) { this->age = age; }
    void Student::setDaysToFinish(const std::array<int, 3>& daysToComplete) { this->daysToFinish = daysToComplete; }
    void Student::setDegreeProgram(DegreeProgram degreeProgram) { this->degreeProgram = degreeProgram; }

    void Student::print() const {
        std::cout << studentID << "\t"
            << "First Name: " << firstName << "\t"
            << "Last Name: " << lastName << "\t"
            << "Age: " << age << "\t"
            << "daysInCourse: {" << daysToFinish[0] << ", "
            << daysToFinish[1] << ", "
            << daysToFinish[2] << "} "
            << "Degree Program: ";

        // Switch statement to convert the DegreeProgram enum to a string for output.
        switch (degreeProgram) {
        case DegreeProgram::SECURITY: std::cout << "Security"; break;
        case DegreeProgram::NETWORK: std::cout << "Network"; break;
        case DegreeProgram::SOFTWARE: std::cout << "Software"; break;
        }
        std::cout << std::endl;
    }