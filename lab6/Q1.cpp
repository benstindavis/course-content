#include<iostream>

using namespace std;


void stringFunction(char* str){
    int countCapitalLetters = 0;
    int countSmallLetters = 0;
    int countNumbers = 0;

    for (int i = 0;str[i]!='\0';i++){
        if(str[i]>='A'&&str[i]<='Z'){
            countCapitalLetters++;
        }
        else if(str[i]>='a'&&str[i]<='z'){
            countSmallLetters++;
        }
        else if(str[i]>='0'&&str[i]<='9'){
            countNumbers++;
        }
    }

    cout<<"Capital Letters : "<<countCapitalLetters<<endl;
    cout<<"Small Letters   : "<<countSmallLetters<<endl;
    cout<<"Numbers         : "<<countNumbers<<endl;
}





int main(){
    char str[100];

    cout<<"Enter the string : ";
    cin>>str;

    stringFunction(str);


    return 0;
}