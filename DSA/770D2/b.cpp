#include<bits/stdc++.h>

using namespace std;

template <size_t N>
std::bitset<N> increment ( std::bitset<N> in ) {
    for ( size_t i = 0; i < N; ++i ) {
        if ( in[i] == 0 ) {  
            in[i] = 1;
            break;
            }
        in[i] = 0; 
        }
    return in;
    }


bool func(deque<long long int> a, int n, long long int x, long long int y) {
    bitset<100001> mask;
    mask = 0;
    for(unsigned long long int i = 0;i < pow(2,n); i++){
        long long int d = x;
        for(int j = 0; j < n; j++){
            if(mask[j]){
                d = d + a[j];
            }
            else {
                d = d ^ a[j];
            }

        }
        if(d == y){
            return true;
        }
        mask=increment(mask);
    }
    return false;
}   



int main() {
    int t;
    cin >> t;
    while (t--) {
        deque<long long int> arr;
        int n;
        long long int x, y, tmp;
        cin >> n >> x >> y;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            arr.push_back(tmp);
        }
        if (func(arr,n,x,y)) {
            cout << "Alice" << endl;
        }
        else{
            cout << "Bob" << endl;
        }
    }
}