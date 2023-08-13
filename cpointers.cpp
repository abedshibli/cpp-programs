#include <iostream>
void ptrvalue(int* ptrn){
    std::cout<<*ptrn<<std::endl;
}

int main(){
    int n=5;
    std::cout<<&n<<std::endl;
    int *ptr=&n;
    std::cout<<*ptr<<std::endl;
    *ptr=10;
    std::cout<<*ptr<<std::endl;
    ptrvalue(&n);
    int numbers[5]={1,2,3,4,5};
    std::cout<<*(numbers+3);
}