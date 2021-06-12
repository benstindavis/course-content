#include <iostream>

using namespace std;

char* toLowerCase(char* str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 'a' - 'A';
        }
    }

    return str;
}

int checkPangram(char* str) {
    toLowerCase(str);
    int isPangram = 1;
    for (char ch = 'a'; ch <= 'z';ch++) {
        int chCount = 0;
        for (int i = 0; str[i] != '\0';i++) {
            if(str[i] == ch){
                chCount++;
                break;
            }
        }
        if(chCount==0){
            isPangram = 0;
            break;
        }
    }
    return isPangram;    
}

int main() {

    char str[100];
    cout << "Enter a string : ";
    cin.getline(str, 100);
    if (checkPangram(str)) {
        cout << "Its a Pangram" << endl;
    }
    else {
        cout << "Its not a Pangram" << endl;

    }
    return 0;
}