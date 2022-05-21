#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b,c,cou = 0;

    for(int i = 0; i < n ;i++){
        cin>>a>>b>>c;
        if((a+b+c)>1){
            cou++;
        }
    }

    cout<<cou;
    return 0;
}