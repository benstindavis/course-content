#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        unsigned long long int a,s;
        deque<int>d;
        cin>>a>>s;
        bool isp = true;
        while(s!=0){
            int ua = a%10;
            int us = s % 10;

            if(us - ua > -1 && us - ua < 10){
                d.push_front(us-ua);
                s /= 10;
            }
            else if(us - ua < 0 ){
                us = s %100;
                if(us - ua > 10 || us - ua < 0){
                    isp = false;
                    break;
                }
                else {
                    d.push_front(us - ua);
                }
                s /=100;

            }
            a /=10;
        }
        if(a!=0){
            isp = false;
        }
        
        if(isp){
            unsigned long long int sum = 0;
            for(auto i = d.begin(); i !=d.end(); ++i){
                sum*=10;
                sum += *i;
            }
            cout<<sum<<endl;
        }
        else {
            cout<<-1<<endl;
        }
    }
}