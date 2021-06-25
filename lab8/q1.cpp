#include <iostream>
#include <string.h>

using namespace std;


void matrixInput(int a[][100],int m ,int n){
    cout<<"Enter the elements"<<endl;
    for(int i = 0; i<m; i++){
        for(int j = 0 ; j<n ; j++){
            cin>>a[i][j];
        }
    }
    
}

void matrixMultiply(int a[][100], int b[][100],int m1, int n1, int m2, int n2){
    if(n1!=m2){
        cout<<"Cannot multiply";
        return;
    }
    else{
        int c[100][100];
        for(int i=0;i<m1;i++){
            for(int j = 0; j<n2;j++){
                c[i][j] = 0;
                
                for(int k = 0; k<m1;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        cout<<"THe final matrix is"<<endl;
        for(int i=0;i<m1;i++){
            for(int j = 0; j<n2;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }    
    }

}



int main(){
    int m1,n1,m2,n2;
    int a[100][100],b[100][100];

    cout<<"Enter the rows and columns of a: ";cin>>m1>>n1;
    matrixInput(a,m1,n1);
    cout<<"Enter the rows and columns of b: ";cin>>m2>>n2;

    matrixInput(b,m2,n2);
    matrixMultiply(a,b,m1,n1,m2,n2);

    return 0;
}