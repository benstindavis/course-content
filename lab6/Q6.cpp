#include<iostream>

using namespace std;

void joinStrings(char* a, char* b){
    int lenA;
    for(lenA = 0;a[lenA]!='\0';lenA++){

    }
    int i;
    for(i = 0;b[i]!='\0';i++){
        a[i+lenA] = b[i];
    }
    a[i+lenA]='\0';

}

void removeCharacters(char *str ){
    for(int i = 0;str[i]!='\0';i++){
        if(str[i]==' '||str[i]=='\n'){
            int j;
            for(j = i; str[j]!='\0';j++){
                str[j] = str[j+1];
            }
            
        }
    }
   
}

int main(){
    char str[30000];
    str[0] = '\0';
    int t;
    cin>>t;
    cin.ignore();
   


    while(t--){
        char s[300];
        cin.getline(s,300);
        removeCharacters(s);
        joinStrings(str,s);



    }
    removeCharacters(str);
    cout<<str;
    
    return 0;
}