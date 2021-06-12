#include<iostream> 

using namespace std;

int main(){
    int x,y,count=0;
    cout<<"Enter the numbers : ";
    cin>>x>>y;

    for(int i = x; i<=y;i++){
        if(!(i%7)||!(i%8)){
            count++;
        }
    }
    cout<<count;
    return 0;
}