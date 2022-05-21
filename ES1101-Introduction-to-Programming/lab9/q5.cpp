#include<iostream>

using namespace std;

void add2Matrices(int* a, int* b, int* c, int m, int n) {
    for (int i = 0; i < m;i++) {
        for (int j = 0; j < n;j++) {
            *(c + i * n + j) = *(a + i * n + j) + *(b + i * n + j);
        }
    }
}

int main() {
    int* a, * b, * c;
    int m, n;
    cin >> m >> n;
    a = new int[m * n];
    b = new int[m * n];
    c = new int[m * n];
    for (int i = 0; i < m;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> *(a + i * n + j);
        }
    }
    for (int i = 0; i < m;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> *(b + i * n + j);
        }
    }

    add2Matrices(a,b,c,m,n);

    for (int i = 0; i < m;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout <<*(c + i * n + j)<<" ";
        }
        cout<<endl;
    }
    delete [] a;
    delete [] b;
    delete [] c;

    return 0;
}