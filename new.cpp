#include <iostream>
double power(int power,double base){

    double num=1;
    for(int i=0;i<power;i++){
        num*=base;
    }
  return num;
}
void call_pow(){
   double b,p;
    std::cout<<"enter the base : "<<std::endl;
    std::cin>>b;
    std::cout<<"enter the power: "<<std::endl;
    std::cin>>p;
    std::cout<<"the number: "<<power(p,b)<<std::endl; 
}
int main() {
   call_pow();
    }