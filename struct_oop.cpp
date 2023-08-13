#include <iostream>

struct student{
std::string name;
std::string birthdate;
int class_number;
int id ;


};

int main(){
    student abed;
    abed.name="abed";
    abed.id=305047540;
    abed.birthdate="15/08/1990";
    abed.class_number=1;

    std::cout<<"First Name : "<<abed.birthdate<<std::endl;


}