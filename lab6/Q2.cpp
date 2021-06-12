#include <iostream>

using namespace std;

char *toLowerCase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 'a'-'A';
        }
    }

    return str;
}

int compareString(char *a, char *b)
{
    a = toLowerCase(a);
    b = toLowerCase(b);
    cout<<a<<endl;
    cout<<b<<endl;


    int i;
    for (i = 0; a[i] != '\0' && b[i] != '\0'; i++)
    {
        if (a[i] < b[i])
        {
            return -1;
        }

        else if (a[i] > b[i])
        {
            return 1;
        }
    }

    if (a[i] == '\0' && b[i] == '\0')
    {
        return 0;
    }

    if (a[i] == '\0')
    {
        return -1;
    }

    else
    {
        return 1;
    }
}

int main()
{

    char a[100], b[100];

    cout << "Enter string A : ";
    cin >> a;
    cout << "Enter string B : ";
    cin >> b;

    cout << compareString(a, b) << endl;

    return 0;
}