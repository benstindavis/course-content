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
    int n,f=0;
    cout<<"Enter the number N : ";
    cin>>n;
    for(int i = 2;i<=n/2;i++){
        if(isPrime(i)){
            if(isPrime(n-i)){
                f++;
                break;
            }
        }
    }
    if(f){
        cout<<"yes";
    }
    else {
        cout<<"no";
    }

    return 0;
}    