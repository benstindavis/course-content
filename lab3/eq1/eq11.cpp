#include<iostream> 

using namespace std;

int main(){
    int n;
    cout<<"Enter the number N : ";
    cin>>n;
    if(n){
        if(n>0){
            cout<<"Positive";
        }
        else{
            cout<<"Negative";
        }
    }
    else{
        cout<<"Zero";
    }
    return 0;
}