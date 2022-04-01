#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    long long int n,k;
    while(t--){
        cin>>n>>k;
        int m;
        if (n <k){
            
            if(k%n == 0){
            m = k/n ;

            }
            else {
            m = k/n + 1;

            }
        }       
        else if (n>k){
            if(n%k == 0){
                m = 1;
            }
            else {
                m = 2;
            }
        }
        else {
            m = 1;
        }
        cout << m <<endl;
    }
    return 0;
}


// n < k 
// m = k / n + 1


// n == k
// m = 1

// n > k
// if n % k == 0
// m = 1
// else 
// m = 2