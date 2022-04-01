#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    int n,m,k;

    int max = 0;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;

        max = 0;


        // n/k - number of cards per player
        // k - number of players
        // n - number of cards 


        // m == 0 
        // max = 0
        
        // a cards have been distributed 
        // n-a cards left
        // m - a jokers left;
        // k-1 people are there 
        // m-a / k - 1


        if(m==0){
            max = 0;
        } 
        else {
            int a = min(m,n/k);
            int b;
            if((m-a) % (k-1) > 0 ){
                b = (m-a) / (k-1) + 1;
            }
            else {
                b = (m-a)/(k-1);
            }
            max = a-b;

        }
        cout<<max <<endl;
    }
    return 0;
}