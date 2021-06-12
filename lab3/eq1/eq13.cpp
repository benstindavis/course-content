#include<iostream> 

using namespace std;

int main(){
    int n,sum=0;
    cout<<"Enter the number N : ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        sum += i*i*i*i;
    }
    cout<<"The sum is : "<<sum;
    return 0;

}    