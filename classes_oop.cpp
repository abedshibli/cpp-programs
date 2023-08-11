#include <iostream>
#include <vector>
class student{
    std::string status="single";
public:   
    std::string name;
    std::string birthdate;
    std::string get_status(){
        return status;
    }
    int class_number;
    int id ;



};

int main(){
    student abed;
    abed.name="abed";
    abed.id=305047540;
    abed.birthdate="15/08/1990";
    abed.class_number=1;
    std::vector<student> users;
    users.push_back(abed);

    std::cout<<"First Name : "<<abed.birthdate<<std::endl;
    std::cout<<abed.get_status()<<std::endl;
    std::cout<<users[0].class_number<<std::endl;
}