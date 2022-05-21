#include <bits/stdc++.h>


using namespace std;



int main(){
    int n, m;
    int arr[1000][2];

    cin>>n>>m;

bool ind[1000];

for(int i = 0 ; i<n;i++){
    ind[i] = true;
}


    for(int i = 0 ;i < m;i++){
        cin>>arr[i][0]>>arr[i][1];
        ind[arr[i][0]-1] = false;
        ind[arr[i][1]-1] = false;
    }

    int j = 0;

    while(ind[j] == false){
        j++;
    }
    j++;
    

    cout<<n-1<<endl;
    for(int i = 1; i <=n;i++){
        if(i!=j){
            cout<<i <<" "<<j<<endl;
        }
    }

return 0;


    

}