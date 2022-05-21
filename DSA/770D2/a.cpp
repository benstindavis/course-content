#include <bits/stdc++.h> 
using namespace std;
string rev(string str) {
    string rev = string(str.rbegin(), str.rend());
    return rev;
}


// int countStr(string s, int k,int &c) {
//     if (k == 0) {
//         c++;
//         return 0;
//     }
//     else {
//         string s0, s1;
//         s0 = s + rev(s);
//         s1 = rev(s) + s;

//         if (s0 == s1) {
//             countStr(s0, k-1,c);
//         }
//         else {
//             countStr(s0, k-1,c);
//             countStr(s1, k-1,c);
//         }
//     }

//     return 0;
// }


int func(string s,int n,int k){
    if(rev(s)==s || k < 1 || n==1){
        return 1;
    }
    return 2;
}



int main() {
    int t;
    cin >> t;
    int n, k;
    string s;
    while (t--) {
        cin >> n >> k;
        cin >> s;
        cout<<func(s,n,k)<<endl;
    }
}