#include<iostream>

using namespace std;

int main(){

    char str[100];
    cout<<"Enter a huge number (length<100) : ";
    cin>>str;

   int sum = 0;
   for(int i =0 ; str[i]!='\0';i++){
       sum += str[i] - '0';
   }

   cout<<"Sum of digits : "<<sum<<endl;
    return 0;
}