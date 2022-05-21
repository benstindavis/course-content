#include <iostream>

using namespace std;

int sumOfDigits(int n){
    int digit,sum = 0;
    while(n>0){
        digit = n%10;
        sum += digit;
        n /= 10;
    }
    return sum;
}


int convertToDigit(int n){
    while(n/10){
        n = sumOfDigits(n);
    }
    return n;
}

int main(){
    int n;
    cout<<"Enter the number N : ";
    cin>>n;
    cout<<"The digit is : "<<convertToDigit(n);
    return 0;
}    