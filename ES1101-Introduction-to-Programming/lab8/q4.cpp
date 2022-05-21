#include<iostream>
#include<string.h>

using namespace std;

void sortArray(char arr[][100], int n){
    int i, j;
    for (i = 0; i < n-1; i++)    {
     
    for (j = 0; j < n-i-1; j++)
        if (strcmp(arr[j] , arr[j+1])>0){
            char temp[100];
            strcpy(temp,arr[j]);
            strcpy(arr[j],arr[j+1]);
            strcpy(arr[j+1],temp);

        }}
}



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char arr[300][100];
        for(int i = 0 ; i <n ;i++){
            cin>>arr[i];
        }
        
        sortArray(arr,n);
        
        for(int i = 0;i<n;i++){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}
