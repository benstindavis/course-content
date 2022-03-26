#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    int a[50];
    cin >> n >> k;

    for (int i = 0; i < n;i++) {
        cin >> a[i];
    }
    int c = 0;
    for (c = 0; a[c] >= a[k - 1] && a[c] != 0 && c<n;c++);
    cout << c;
    return 0;
}