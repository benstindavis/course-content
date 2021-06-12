#include<iostream>

using namespace std;

void sortArray(int a[], int n) {   //bubble sort
    for(int j = 0; j<n-1;j++){
        for (int i = 0; i < n - j - 1;i++){
            if (a[i + 1] < a[i]){
                int temp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = temp;   
            }
          
        }
    }
}

void printArray(int a[], int n){
     for(int i = 0 ; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int isEqual(int a[],int b[], int n , int m){
    if(n!=m){
        return 0;
    }
    else {
        for(int i = 0;i<n;i++){
            if(a[i]!=b[i]){
                return 0;
            }
        }
        return 1;
    }
}

void mode(int a[], int n){
    int modes[100];
    int t,j;
    int count;
    int maxCount = 0;

    for(int i = 0; i < n ;i++){
        j = i;
        count = 0;
        while(a[i]==a[j]){
            count++;
            j++;
        }
        i = j-1;
        if(count > maxCount){
            t = 0;
            maxCount = count;
            modes[t++] = a[i];
        }
        else if(count == maxCount){
            modes[t++] = a[i];
        }
        
    }
    if(isEqual(a,modes,n,t)){
        cout<<"No Modes"<<endl;
    }

    else {
        if(t==1){
            cout<<"Mode"<<endl;
        }
        else{
            cout<<"Modes"<<endl;
        }    
        printArray(modes,t);
    }
    
}



int main() {
    int n;
    float mean,median,sum = 0;
    int arr[100];
    cout<<"Enter the number of elements(<100) : ";cin>>n;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sortArray(arr,n);
    cout<<"Sorted Array"<<endl;
    printArray(arr,n);

    //mean
    mean = sum / n;
    cout<<"Mean"<<endl;
    cout<<mean<<endl;

    //median
    if(n%2)
        median = arr[n/2];
    else
        median = float((arr[n/2]+arr[(n-1)/2]))/2; 
    cout<<"Median"<<endl;
    cout<<median<<endl;

    //mode
    mode(arr,n);

    return 0;

}

