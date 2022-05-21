#include<iostream>
/*
1 2 3 4
2 3 5
*/
using namespace std;


void mergeSortedArrays(int *a,int *b,int m , int n){
    int *c;
    c = new int[m+n];
    int k = 0;
    int i=0,j=0;
    while(i<m&&j<n){
        if(a[i]<b[j]){
            c[k++] = a[i++];
            
        }
        else {
            c[k++] = b[j++];
            
        }
    }
    if(i==m){
        while(j<n)
            c[k++] = b[j++];
    }
    else {
        while(i<m)
            c[k++] = a[i++];
    }
    
    
    for(int i = 0 ; i < k ; i++){
        cout<<c[i]<<" ";
    }
        cout<<endl;
   
}


int main(){
    int t;cin>>t;
    while(t--){
        int *a,*b;
    int m,n;
    cin>>m;

    a = new int[m];
    

    for(int i = 0 ; i < m ; i++){
        cin>>a[i];
    }
        cin>>n;
        b = new int[n];
        for(int i = 0 ; i < n ; i++){
        cin>>b[i];
    }
      

    mergeSortedArrays(a,b,m,n);

    

    delete [] a;
    delete [] b;
        
    }
    return 0;
    


}