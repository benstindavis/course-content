#include<iostream>

using namespace std;

void printArray(int a[], int n){
     for(int i = 0 ; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void shiftArray(int a[], int n ){
    for(int i = 0;i<n;i++){
        if(a[i]==0){
            int j;
            for(j = i+1;j<n;j++){
                a[j-1] = a[j];
            }
            a[j]=0;
        }
    }
}

int main(){
    int a[100],n,count = 0;
    cout<<"Enter the number of elements(<100) : ";cin>>n;
    for(int i = 0;i<n;i++)
        cin>>a[i];

    shiftArray(a,n);
    cout<<"Shifted Array"<<endl;
    printArray(a,n);

    return 0;
}        