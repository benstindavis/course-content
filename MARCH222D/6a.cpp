#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    string s;
    int n;
    cin>>t;
    int mask;
    int max;
    int c;

    while(t--){
        cin>>n;
        cin>>s;
        mask = 0;
        max = 0;
        for(mask = 0 ; mask < pow(2,n-2) ;mask++){
            for(int i =0; i < n-2; i++){
                if(mask & (1<<i)){
                    swap(s[i],s[i+2]);
                }
            }
            c = 0;
            for(int i = 0; i < n -1 ; i++){
                if(s[i] == '0' && s[i+1] == '1'){
                    c++;
                }
            }
            if (c>max){
                max = c;
            }


        }

        cout<<max<<endl;
    }
}