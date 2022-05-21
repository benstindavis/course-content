#include<iostream>

using namespace std;

int main(){
    int a[100],n,count = 0;
    cout<<"Enter the number of elements(<100) : ";cin>>n;
    for(int i = 0;i<n;i++)
        cin>>a[i];

    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(a[i]<a[j]){
                count++;
            }
        }
    }

    cout<<"Number of Valid Pairs : "<<count;
    return 0;
}