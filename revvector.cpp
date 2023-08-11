#include <iostream>
#include <string>
#include <vector>
int main(){
   std::vector <int> numbers={1,2,3,4,3,4,6};

   std::vector<int> data(numbers.size());
   
    for(int i=0;i<numbers.size();i++){
        data[i]+= numbers[numbers.size()-1-i];

    }
    for(int i=0;i<data.size();i++){
        std::cout<<data[i]<<std::endl;
    }


}