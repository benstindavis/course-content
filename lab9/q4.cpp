#include<iostream>
/*
1 2 3 4
2 3 5
*/

using namespace std;

void mergeSortedArrays(int *a,int *b,int m , int n){
    int *c;
    c = new int[m+n];
    for(int i = 0 , j = 0; i + j < m + n;){
        if(a[i]<b[j]){
            c[i] = a[i];
            i++;
        }
        else {
            c[i] = b[j];
            j++;
        }
    }
    a = c;
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

    mergeSortedArrays(a,b,m,n);

    for(int i = 0 ; i < m+n ; i++){
        cout<<a[i]<<" ";
    }

    delete [] a;
    delete [] b;


}