#include <iostream>

using namespace std;

long int factorial(int n){
    long int fac = 1;
    for(int i = 1; i <= n;i++){
        fac*=i;
    }
    return fac;
}

double ncr(int n,int r){
    return factorial(n) / (factorial(n-r)*factorial(r));
}

int main(){
    int n,r;
    cout<<"Enter the number N : ";
    cin>>n;
    cout<<"Enter the number R : ";
    cin>>r;
    cout<<"nCr = "<<ncr(n,r);
    return 0;

}    