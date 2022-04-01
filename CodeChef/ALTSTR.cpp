#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        int c,d;
        c = d= 0;

        for(int i = 0; i < n; i++){

            if(s[i] == '0'){
                c++;
            }
            else {
                d++;
            }
        }
        
        int x = 2*min(c,d) + (c!=d);

        cout<<x<<endl;
    }
    return 0;
}