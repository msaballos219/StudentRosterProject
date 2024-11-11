// StudentRosterProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "roster.h"

int main() {
    // Prints out course information
    std::cout << "Course Title: Scripting and Programming - Applications - C867" << std::endl;
    std::cout << "Programming Language: C++" << std::endl;
    std::cout << "WGU Student ID: 011768283" << std::endl;
    std::cout << "Name: Melvin Saballos" << std::endl;
    std::cout << std::endl;

    Roster classRoster;

    const std::string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "011768283,Melvin,Saballos,msaball@wgu.edu,29,28,28,28,SOFTWARE"
    };

    for (const auto& data : studentData) {
        classRoster.parseAndAddStudent(data);
    }

    std::cout << "Displaying all students:" << std::endl;
    classRoster.printAll();
    std::cout << std::endl;

    std::cout << "Displaying invalid emails:" << std::endl;
    classRoster.printInvalidEmails();
    std::cout << std::endl;

    // Loop through classRosterArray and for each element:
    std::cout << "Average days in course:" << std::endl;
    for (int i = 0; i < 5; i++) {
        classRoster.printAverageDaysInCourse(studentData[i].substr(0, 2));
    }
    std::cout << std::endl;

    std::cout << "Showing students in degree program: SOFTWARE" << std::endl;
    classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);
    std::cout << std::endl;

    std::cout << "Removing student with ID A3:" << std::endl;
    classRoster.remove("A3");
    std::cout << std::endl;

    std::cout << "Displaying all students:" << std::endl;
    classRoster.printAll();
    std::cout << std::endl;

    std::cout << "Removing student with ID A3:" << std::endl;
    classRoster.remove("A3");
    std::cout << std::endl;

    return 0;
}
