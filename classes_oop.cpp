// classes_oop.cpp
#include "classes_oop.h"

Student::Student(std::string marital, std::string first, std::string birth, std::string major, int studentAge, int studentID)
        : maritalStatus(marital), firstName(first), birthYear(birth), major(major), age(studentAge), id(studentID) {
    // Constructor implementation
}

std::ostream& operator<<(std::ostream& os, const Student& student) {
    os << "Name: " << student.firstName << "\n";
    os << "Marital Status: " << student.maritalStatus << "\n";
    os << "Birth Year: " << student.birthYear << "\n";
    os << "Major: " << student.major << "\n";
    os << "Age: " << student.age << "\n";
    os << "ID: " << student.id << "\n";
    return os;
}
