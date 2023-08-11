#include<iostream>
#include<string>
std::string ispalindrome(std::string st1){
     std::string newstr="";
    for(int i=0;i<st1.length();i++){
       newstr+=st1[st1.length()-1-i];
    }
    if (st1==newstr){
        return "is palindrome";
    }
    else{
        return "not palindrome";
    }
}
int main(){
  std::string st2="saippuakivikxauppias";
  std::cout<<ispalindrome(st2)<<std::endl;


}