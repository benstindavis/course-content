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
    int n;
    cout<<"Enter the number N : ";
    cin>>n;
    int t = n;
    for(int i = 0; i < n ;i++){
        for(int k=0;k<t;k++){
            cout<<" ";
        }
        for(int j = 0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
        t--;
    }

    return 0;
}    