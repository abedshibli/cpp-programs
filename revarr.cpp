#include <iostream>
#include <string>

int main(){
   int numbers[]={1,2,3,4,3,4,6};
   int size=sizeof(numbers)/sizeof(int);
   int newarr[size]={};
   
    for(int i=0;i<size;i++){
        newarr[i]=numbers[size-1-i];

    }
    for(int i=0;i<size;i++){
        std::cout<<newarr[i]<<std::endl;
    }


}