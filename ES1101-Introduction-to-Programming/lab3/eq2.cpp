#include<iostream>

using namespace std;

int main(){
    int n,b = 0,r,p = 0;
    cout<<"Enter the number N : ";
    cin>>n;
    while(n>0){
        r = n % 2;
        for(int i = 0;i < p ;i++){
            r*=10;
        }
        b += r;
        n /= 2;
        p++;
    }
    cout<<"The Binary equivalent of n is : "<<b;
    return 0;
}