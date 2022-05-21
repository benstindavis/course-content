#include <bits/stdc++.h>

using namespace std;





int main() {
    int t;
    int a[4];
    cin >> t;
    while (t--) {
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        sort(a, a + 4);
        int m = -1, n = -1;
        do {
            int x, y, z, w;
            x = a[0]; //a+b
            y = a[1]; // a-b;
            z = a[2]; //a.b
            w = a[3]; // a/b

            m = (x + y) / 2;
            n = (x - y) / 2;

            if (m > 0 && n > 0) {
                if (z == m * n && w == m / n) {
                    break;
                }
                else {
                    m = -1;
                    n = -1;
                }
            }
            else {
                m = -1;
                n = -1;
            }

        } while (
            next_permutation(a, a + 4)
            );
        cout << m << " " << n << endl;
    }
    return 0;
}