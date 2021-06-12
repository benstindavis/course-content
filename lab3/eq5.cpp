#include<iostream>
#include<math.h>

using namespace std;

int isPrime(int n){
    for(int i = 2;i<=sqrt(n);i++){
        if (n % i == 0){
            return 0;
        }    
    }
    return 1;
}



int main(){
    int n;
    cout<<"Enter the number N : ";
    cin>>n;
    cout<<"Prime numbers are : "<<endl;
    for(int i = 1;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}