#include <iostream>


using namespace std;


void matrixInput(int a[][100], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

}

void add2matrices(int a[][100], int b[][100], int sum[][100],int r, int c) {


 
    for (int i = 0;i < r;i++) {
        for (int j = 0; j < c;j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    

}



int main() {
    
    int t;
    cin>>t;
    while(t--){
          int r,c;
    int a[100][100], b[100][100], sum[100][100];
    cin>>r>>c;

    matrixInput(a, r, c);
    matrixInput(b, r, c);

    add2matrices(a,b,sum,r,c);
    for (int i = 0;i < r;i++) {
        for (int j = 0; j < c;j++) {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    
        
    }
  
   

    return 0;
}