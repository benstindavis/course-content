#include<iostream>

using namespace std;

int main(){
    int n;
    int x;
    cout<<"Enter the number N : ";
    cin>>n;
    int sum = 0;
    for (int i = 1 ; i <= n ; i++){
        //cin>>x;
        sum+=i; // sum = sum + i ;
    }
    cout<<"The sum is : "<<sum;
    return 0;
}