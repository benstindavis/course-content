#include <bits/stdc++.h>

using namespace std;


int main(){
    int t;
    int n,a,b;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;

        // if a-b == 0 || a-b > 2
        // c = 0
        // if a-b == 1 
        //  if(a == n || b == 1)
        // c = 1
        // else c = 2
        // if a-b == 2
        // c == 1

        int c = 0;

        if (a > b){
            if (a-b == 0 || a-b > 2){
                c = 0;
            }
            else if ( a-b == 1){
                if ( a == n || b == 1){
                    c = 1;
                }
                else {
                    c = 2;
                }
            }
            else if (a-b == 2){
                c = 1;
            }
        }
        else {
            if (b-a == 0 || b-a > 2){
                c = 0;
            }
            else if ( b-a == 1){
                if ( b == n || a == 1){
                    c = 1;
                }
                else {
                    c = 2;
                }
            }
            else if (b-a == 2){
                c = 1;
            }

        }

        cout<< c <<endl;

    }

    return 0;
}