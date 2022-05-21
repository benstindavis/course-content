#include <bits/stdc++.h>

using namespace std;


int main(){

    int t;
    string s;
    cin>>t;
    int n;
    while(t--){
        cin>>n;
        cin>>s;

        int e1,o1,o0,e0;
        e1 = 0;
        o1 = 0;
        o0 = 0;
        e0 = 0;
        int c = 0;

        for(int k = 0; k < n ; k++){
            if (k%2==1){
                if(s[k] == '1'){

                    o1++;
                }
                else {
                    o0++;
                }
            }
            else {
                if (s[k]=='0'){
                    e0++;
                }
                else {
                    e1++;
                }

            }
        }

        if (o0 < e1){
            if (o0 != 0){
                c+= o0;
            }
        }
        else {
            if(e1 != 0){
                c+= e1;
            }
        }

        
        if (o1 < e0){
            if (o1 != 0){
                c+= o1;
            }
        }
        else {
            if(e0 != 0){
                c+= e0;
            }
        }
        
        cout<<c<<endl;
    }
    return 0;
}