#include<iostream>

using namespace std;

int main(){
    char str[100];
    char ch;
    int i;
    for(i = 0; (ch=cin.get())!=EOF;i++){
        str[i]=ch;

    }
    str[i]='\0';

    cout<<str;
    return 0;
}