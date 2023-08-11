#include <iostream>
#include <string>

class Student {
private:
    std::string status;
    std::string name;
    std::string birthdate;
    std::string major;
    int class_number;
    int id;

public:
    Student(std::string status, std::string name, std::string birthdate, std::string major, int class_number, int id) {
        this->status = status;
        this->name = name;
        this->birthdate = birthdate;
        this->major = major;
        this->class_number = class_number;
        this->id = id;
    }

    friend std::ostream& operator<<(std::ostream& os, const Student& student);
};

std::ostream& operator<<(std::ostream& os, const Student& student) {
    os << "Name: " << student.name << "\n"
       << "Status: " << student.status << "\n"
       << "Birthdate: " << student.birthdate << "\n"
       << "Major: " << student.major << "\n"
       << "Class Number: " << student.class_number << "\n"
       << "ID: " << student.id << "\n";
    return os;
}

int main() {
    Student abed("single", "Abed", "1990", "computer science", 10, 305047540);
    std::cout << abed;

    return 0;
}