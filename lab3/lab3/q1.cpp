#include<iostream>

using namespace std;

int main(){
    int n,r;
    cout<<"Enter the number N : ";
    cin>>n;
    cout<<"Enter r : ";cin>>r;
    for (int i = 1; i <= r; i++){
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}