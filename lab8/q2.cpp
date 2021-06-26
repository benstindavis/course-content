#include<iostream>

using namespace std;


void generateMagicSquare(int n) {
    int a[100][100] = { 0 };
    int i = 0, j = n / 2;
    for (int k = 1; k <= n * n;k++) {
        a[i][j] = k;
        i = (i - 1 + n) % n;
        j = (j + 1) % n;

        if (a[i][j]) {
            j = (j - 1 + n) % n;

            i = (i + 1) % n;

            i = (i + 1) % n;
        }




    }

    for (int i = 0; i < n;i++) {
        for (int j = 0; j < n;j++) {
            cout << a[i][j] << "  ";
        }
        cout << endl;

    }
}


int main() {
    int n;
    cout << "enter n :"; cin >> n;

    generateMagicSquare(n);
    return 0;
}




