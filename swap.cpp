#include <iostream>
#include <string>

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;

    std::cout<<"a is : "<<a<<" b is : "<<b<<std::endl;

}
int main(){
    int a=10;
    int b=5;
    swap(a,b);
     std::cout<<"a is : "<<a<<" b is : "<<b<<std::endl;
}