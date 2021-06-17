#include<iostream>

using namespace std;


int minElement(int arr[],int low, int high,int currentSmall){
    if(low==high){
        return currentSmall;
    }
    else{
        if(arr[low]<currentSmall){
            currentSmall = arr[low];
        }
        low++;
        return minElement(arr,low,high,currentSmall);
    }
};

int main(){

    int a[100],n;
    cout<<"Enter the number of elements : ";cin>>n;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Smallest element is : "<<minElement(a,0,n,INT16_MAX);
    return 0;
}