#include<iostream> 

using namespace std;

int main(){
    int x,y;
    cout<<"Enter the numbers : ";
    cin>>x>>y;

    for(int i = x; i<=y;i++){
        if(!(i%7)){
            cout<<i<<endl;
        }
    }
    return 0;
}