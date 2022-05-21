#include<iostream>
#include<string.h>
using namespace std;


bool search(char* names[], char word[], int n) {
    for(int i =0 ;i < n; i++){
        if(strcmp(word,names[i])==0){
            return true;
        }
    }
    return false;
}
int	main()
{
    char* names[1000]; // array of pointers
    char word[100];
    //use dynamic memory allocation to create space for each name
    int n = 0 ;
    for(int i = 0 ; i<n;i++){
        names[i] = new char[100];
        cin>>names[i];
    }
    cin>>word;

    cout<<search(names, word, n); // n number of items in names.

    for(int i = 0 ; i < n; i++){
        delete [] names[i];
    }

    return 0;
}
