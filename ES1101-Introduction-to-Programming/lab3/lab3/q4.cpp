#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number N : ";
    cin>>n;
    cout<<"The sum is : ";
    int sum = 0;
    for(int i = 1;i<=n;i++){
        int t = 0;
        for(int j = 1;j<=i;j++){
            
            t*=10;
            t+=1;
        }
        sum+=t;
    }
    cout<<sum;

    return 0;
}