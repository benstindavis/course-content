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
    for (char check = 'a'; check <= 'z';check++) {
        for (int i = 0; str[i] != '\0';i++) {

        }
    }

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