#include<iostream>

using namespace std;


int stringLength(char *str, int count){
    if(str[count]=='\0'){
        return count;
    }
    else{
        count++;
        return stringLength(str,count);
    }
}


int main(){
    char str[1000];
    cout<<"Enter the string : ";
    cin.getline(str,1000);
    cout<<"The length is : "<<stringLength(str,0)<<endl;
    return 0;
}