#include <bits/stdc++.h>
using namespace std;

int main(){
    int i = 0, j = 0;
    int tmp;
    int c = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin>>tmp;
            if(tmp){
                c = abs(i-2) + abs(j -2);
            }
        }
    }
    cout<<c<<endl;
    return 0;
}