#include <bits/stdc++.h>

using namespace std;

void findans(vector<int> arr,int n){
    vector<bool> frq;
    for (int i = 0; i < n+1; i++)
    {
        frq.push_back(false);
    }
    
    for(int i = 0; i < n;i++){
        while(arr[i]>0){
            if(arr[i]<=n){
                if(!frq[arr[i]]){
                    frq[arr[i]] = true;
                    break;
                }
            }
            arr[i]/=2;
        }
    }

    bool isNotValid = false;

    for(int i = 1; i < n + 1; i++){
        if(!frq[i]){
            isNotValid = true;
            break;
        }
    }

    if(isNotValid){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return;
}


int main()
{
    int t;
    cin>>t;
    int n,tmp;
    while(t--){
        cin>>n;
        vector<int> arr;
        for(int i = 0 ; i < n; i++){
            cin>>tmp;
            arr.push_back(tmp);
        }
        findans(arr,n);
    }
    return 0;
}