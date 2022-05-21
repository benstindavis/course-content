#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        unsigned long long int h;
        cin>>n>>h;
        vector<int> a;
        for(int i= 0; i < n ; i++){
            int tmp;
            cin>>tmp;
            a.push_back(tmp);
        }


        unsigned long long int l = 1, r = h;
        unsigned long long int m,s = 0,bk = r;
        while(l<=r){
            s = 0;
            m = l + (r-l)/2;
            //cout<<m;
            for(int i = 0; i < n-1; i++){
                if(a[i+1] - a[i] < m){
                    s += a[i+1] - a[i];
                }
                else {
                    s += m;
                }
            }
            // if(a[n-1]>m){
            //     s+=m;
            // }
            // else {
            // s += a[n-1];
            // }
            s+=m;
            //cout<<" "<<s<<endl;
            if(bk>m && s>=h){
                bk = m;
            }
            if(s<h){
                l = m + 1;
            }
            else {
                r = m - 1;
            }
        }
        cout<<bk<<endl;
    }
}