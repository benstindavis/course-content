#include<iostream>

using namespace std;

int main(){
    int n,temp,sum = 0;
    cout<<"Enter the number N : ";
    cin>>n;
    temp = n;
    while(temp>0){
        int digit = temp%10;
        sum += digit*digit*digit;
        temp /= 10;
        
    }

    if(sum==n){
        cout<<"It is an Armstrong Number"<<endl;
    }
    else {
        cout<<"It is not an Armstrong Number"<<endl;
    }
    return 0;
}