#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    int n;
    int a[100000];
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int c = 0;
        bool esc = false;
        bool valid = true;
        for (int x = 0; x < n;x++) {
            for (int y = 0; y < n; y++) {
                for (int k = 0; k < n; k++) {
                    if ((abs(a[x] - a[k]) + abs(a[k] - a[y])) == abs(a[x] - a[y])) {
                        valid = true;
                    }
                    else {
                        valid = false;
                        break;
                    }
                    
                }

                if(valid){
                    cout<<x+1<<" "<<y+1<<endl;
                    esc = true;
                }

                if (esc) {
                    break;
                }
            }
            if (esc) {
                break;
            }
        }

    }

}