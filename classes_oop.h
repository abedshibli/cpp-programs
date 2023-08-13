// classes_oop.h
#ifndef CLASSES_OOP_H
#define CLASSES_OOP_H

#include <string>
#include <iostream>

class Student {
private:
    std::string maritalStatus;
    std::string firstName;
    std::string birthYear;
    std::string major;
    int age;
    int id;

public:
    Student(std::string marital, std::string first, std::string birth, std::string major, int studentAge, int studentID);
    friend std::ostream& operator<<(std::ostream& os, const Student& student);
};

#endif // CLASSES_OOP_H

