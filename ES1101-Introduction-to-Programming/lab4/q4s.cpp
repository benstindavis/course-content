#include <iostream>>

using namespace std;


int main(){
    int n;
    cout<<"Enter the number N : ";
    cin>>n;
    int t = n;
    for(int i = 0; i < n ;i++){
        for(int k=0;k<t;k++){
            cout<<" ";
        }
        for(int j = 0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
        t--;
    }

    return 0;
}    