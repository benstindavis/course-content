#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    int n;
    int a[100000];
    while(t--){
        cin>>n;
        bool ise = true;
        bool hasone = false;
        int ee;

        for(int i = 0; i < n;i++){
            if(i==0){
                cin>>ee;
                a[i] = ee;
                if (a[i] == 1){
                    hasone = true;
                }
            }

            cin>>a[i];
            
                if (a[i] == 1){
                    hasone = true;
                }
            if(a[i]  == a[i-1] && ise){
                ee = a[i];
                ise = true;           
            }
            else {
                ise = false;
            }
        }

        if(ise){
            cout<<"YES";
        }
        else if(hasone) {
            cout<<"NO";
        }
        else {
            cout<<"YES";
        }
        cout<<endl;

    }

    return 0;
}