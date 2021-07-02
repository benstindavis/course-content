#include<iostream>


using namespace std;

void mergeSortedArrays(int *a,int *b){
    
}


int main(){
    int *a,*b;
    int m,n;
    cin>>m>>n;

    a = new int[m];
    b = new int[n];

    for(int i = 0 ; i < m ; i++){
        cin>>a[i];
    }
        for(int i = 0 ; i < n ; i++){
        cin>>b[i];
    }

    mergeSortedArrays(a,b);

    for(int i = 0 ; i < m+n ; i++){
        cout<<a[i]<<" ";
    }

    delete [] a;
    delete [] b;


}