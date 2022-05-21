#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int a[100000];
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    int max = 2;

    for(int i = 0; i<n;i++){
        for(int j = i+2; j<n;j++){
            if(a[j] == (a[j-1]+a[j-2])){

                if(max<(j-i+1)){
                    max = j-i+1;
                }
            }
            else{
                break;
            }

        }
        if(max==n){
            break;
        }
    }
    if(n==1){
        cout<<n;
    }
    else{
    cout<<max;

    }

    return 0;
}