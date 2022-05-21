#include<iostream>
#include<string.h>

using namespace std;

void subStr(char S[], int low, int high, char T[])
{
    int i,j;
    
    for(i=low,j=0; i<= high && S[i]!='\0';i++,j++)
    {
      T[j] = S[i]; 
    }
    T[j] ='\0';   
}


int countOccurrences(char sentence[], char word[]){
    int count = 0;
    int len = strlen(word);
    char sub[100];

    for(int i = 0 ; sentence[i]!='\0' ; i++){
        subStr(sentence,i,i+len-1,sub);
        if(strcmp(sub,word)==0){
            count++;
        }
    }

    return count;

};

int main()
{
    char S[1000];
    char W[100];
    cout<<"Enter the sentence(single line) :";cin.getline(S,1000);
    cout<<"Enter the word to be counted : "; cin>>W;
    cout<<"Occurrences : "<<countOccurrences(S,W);
    return 0;

}

