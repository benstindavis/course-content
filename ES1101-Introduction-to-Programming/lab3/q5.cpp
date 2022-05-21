#include<iostream>

using namespace std;

int main(){
    int n,k,digit,rev = 0;
    cout<<"Enter the number N : ";
    cin>>n;
    cout<<"Enter the number K : ";
    cin>>k;

    for (int i = 0;i<k;i++){
        digit = n%10;
        rev *= 10;
        rev += digit;
        n /= 10;
    }

    cout<<"The last K digits of N, reversed : "<< rev<<n;
    return 0;
}