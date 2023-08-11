

#include <iostream>

int reversed_num(int number){
     int rev=0;
   while (number!=0){
    int temp=number%10;
    rev=rev*10+temp;
    number=number/10;
    
   }
   return rev;
}
int main(){
   int number=123;
  
  
   std::cout<<reversed_num(number);     
}