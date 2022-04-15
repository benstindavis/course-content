#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    int n;
    cin>>t;
    while(t--){
        vector<int> a;
        cin>>n;
        int tmp;
        
        int s[101];
        for(int i = 0; i < 101; i++){
            s[i] = 0;
        }
        for(int i = 0; i < n ; i++){
            cin>>tmp;
            a.push_back(tmp);
            s[tmp] += 1;
            s[tmp] %= 4;
        }
        int c = 0;
        int sm = 0;
        for(int i = 0; i < 101; i++){
            if(s[i] == 1 || s[i] == 3){
                s[i] += 1;
                c++;
            }
            sm += s[i];
        }

        if(sm % 4 == 2){

            c+=2;
        }
        cout<<c<<endl;
        // for(int i = 0; i < 101; i++){
        //     cout<<s[i]<<" ";
        // }


        cout << endl;






    }
}