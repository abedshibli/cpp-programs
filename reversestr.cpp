#include<iostream>
#include<string>
std::string reversestr(std::string st1){
     std::string newstr="";
    for(int i=0;i<st1.length();i++){
       newstr+=st1[st1.length()-1-i];
    }
    
    return newstr;
}
int main(){
  std::string st2="hello";
  std::cout<<reversestr(st2)<<std::endl;

}