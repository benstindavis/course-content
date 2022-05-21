#include<iostream>

using namespace std;



bool isSorted(int a[],int low,int high){
    if(a[low]<a[low-1] && low>0){
        return false;
    }
    else if(low==high){
        return true;
    }
    else
    {
        low++;
        return isSorted(a,low,high);
    }
}

int main(){
    int a[100],n;
    cout<<"Enter the number of elements : ";cin>>n;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    if(isSorted(a,0,n)){
        cout<<"Sorted"<<endl;
    }
    else {
        cout<<"Not sorted"<<endl;
    }
    return 0;
}