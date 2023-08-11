#include <iostream>
#include <cmath>

bool isPrime(int num) {
    int size=num;
    int flag=0;
   for (int i=2;i<size;i++){
    if (i==size ){
        continue;
    }
    else if (size % i==0){
        flag+=1;
    }

   }
   if (flag){
    return false;
   }
   else{
    return true;
   }
}

int main() {
    int number;
    
    std::cout << "Enter a positive integer: ";
    std::cin >> number;
    
    if (number <= 1) {
        std::cout << "Invalid input. Please enter a positive integer greater than 1." << std::endl;
        return 1;
    }
    
    if (isPrime(number)) {
        std::cout << number << " is a prime number." << std::endl;
    } else {
        std::cout << number << " is not a prime number." << std::endl;
    }
    
    return 0;
}