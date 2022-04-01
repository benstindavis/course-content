#include <bits/stdc++.h>

using namespace std;

int main(){

    int t;
    long long int x,y;
    long long int a,b;

    cin>>t;
    while(t--){
        cin>>x>>y;
        cin>>a>>b;

        unsigned long long int c= 0;

            if (x>y){
                swap(x,y);
            }


            if(2*a<=b){
                c += (x+y)*a;
            }
            else {
                c+= (y-x)*a + x*b;
            }
        
        cout<<c<<endl;


    }
    return 0;
}