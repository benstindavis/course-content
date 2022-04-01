#include <bits/stdc++.h>


using namespace std;


int main(){
    int t;
    int n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        int sn = 0;
        int e = 0;
        int o = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                sn = sn * 2;
            }
            else {
                sn = sn * 2 + 1;
            }
            if(i%2 == 0 ){

                e  = e*2;
                o = o*2 + 1;
            }
            else {
                
                e  = e*2+1;
                o = o*2;
            }
        }

        int c1;
        int c2;

        o=o-2;

        cout << bitset<16>(e)<<endl<<bitset<16>(o)<<endl;
        c1 = __builtin_popcount(e&sn);
        c2 = __builtin_popcount(o&sn);
        cout << c1+ c2<<endl;
    }

    return 0;
}