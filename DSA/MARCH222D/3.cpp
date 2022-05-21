#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y,a,b;
    int c = 2 ;
    int t;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;
        c = 2;
        if (x == a || x == b){
            c--;
        }
        if (y == b || y == a){
            c--;
        }
        cout<<c<<endl;
    }
    return 0;
}