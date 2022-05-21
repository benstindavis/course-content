#include<iostream>

using namespace std;

bool isPrime(int n)
{
    /*
    I stole this from internet
    */
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
   
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}

int countPrime(int a[],int low, int high, int count){
    if(low==high){
        return count;
    }
    else {
        if(isPrime(a[low])){
            count++;
        }
        low++;
        return countPrime(a,low,high,count);
    }
}


int main(){
    int a[100],n;
    cout<<"Enter the number of elements : ";cin>>n;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Prime number count : "<<countPrime(a,0,n,0);
    return 0;
}