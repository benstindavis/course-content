#include<iostream>

using namespace std;


int sumRow(int a[][100], int row) {
    int sum = 0;
    for (int i = 0;i < row; i++) {
        sum += a[row][i];
    }
    return sum;
}
int sumCol(int a[][100], int col) {
    int sum = 0;
    for (int i = 0;i < col; i++) {
        sum += a[i][col];
    }
    return sum;

}
int sumRightDiag(int a[][100], int n) {
    int sum = 0;
    for (int i = 0;i < n; i++) {
        sum += a[i][i];
    }
    return sum;
}

int sumLeftDiag(int a[][100], int n) {
    int sum = 0;
    for (int i = 0;i < n; i++) {
        sum += a[i][n - i - 1];
    }
    return sum;
}


int isMagicSquare(int a[][100], int n) {
    int sum = sumRightDiag(a, n);
    if (sum != sumLeftDiag(a, n)) {
        return 0;
    }
    else {
        for (int i = 0; i < n; i++) {
            int rowSum, colSum;

            rowSum = sumRow(a, i);
            colSum = sumCol(a, i);
            if (sum != rowSum || sum != colSum) {
                return 0;
            }


        }
    }

    return 1;
}



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[100][100];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        cout<<isMagicSquare(a,n)<<endl;
    }

    return 0;

}