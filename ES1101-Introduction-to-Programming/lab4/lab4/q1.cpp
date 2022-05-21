#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number N : ";
    cin>>n;
    for(int i = n; i>=0;i--){
        for(int j = n;j>=0;j--){
            for(int k = n;k>=0;k--){
                if((i+j+k)==n)
                    cout<<i<<" "<<j<<" "<<k<<endl;
            }
        }
    }
    return 0;
}