#include <bits/stdc++.h>

using namespace std;


int main(){
    int t,s;
    cin>>t;
    while(t--){
        cin>>s;
        if(s>0){
            cout<<-1*(s+1);
        }

        else {
            cout<<s-1;
        }
        cout<<endl;
    }
    return 0;
}