#include <iostream>

using namespace std;

int stringLength(char *str)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
    {
    }
    return i;
}

void makeStringLengthEqual(char *a, char *b)
{
    /*
    Adds 0 in the front such that the strings become same length
    */
    if (stringLength(a) <= stringLength(b))
    {
        int t = stringLength(b);
        int i = stringLength(a);
        while (t--)
        {
            if (i != 0)
            {
                a[t] = a[--i];
            }
            else
            {
                a[t] = '0';
            }
        }
    }
    else
    {
        int t = stringLength(a);
        int i = stringLength(b);

        while (t--)
        {
            if (i != 0)
            {
                b[t] = b[--i];
            }
            else
            {
                b[t] = '0';
            }
        }
    }
}

char *makeStringLength100(char *str)
{
    int t = stringLength(str);
    int i = 100;
    while (i > -1)
    {
        if (t > -1)
        {
            str[i--] = str[t--];
        }
        else
        {
            str[i--] = '0';
        }
    }
    return str;
}

char *removeStringSpace(char *str)
{
    int len = stringLength(str);

    int spaces = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '0')
        {
            spaces = i;
            break;
        }
    }
    int i;
    for (i = spaces; str[i] != '\0'; i++)
    {
        str[i - spaces] = str[i];
    }
    str[i - spaces] = '\0';

    return str;
}

void addStrings(char *a, char *b)
{
    makeStringLength100(a);
    makeStringLength100(b);

    int remainder[100] = {0};
    char sum[101] = "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000x";
    int t = 99;

    for (; t > -1; t--)
    {
        int digitA = a[t] - '0';
        int digitB = b[t] - '0';
        int rem = remainder[t];
        int digitSum = digitA + digitB + rem;

        if (digitSum / 10 > 0)
        {
            remainder[t - 1] = digitSum / 10;
            digitSum = digitSum % 10;
        }

        sum[t] = digitSum + '0';
    }

    removeStringSpace(a);
    removeStringSpace(b);

    removeStringSpace(sum);

    cout << "The sum is : " << sum << endl;
}

int main()
{

    char str1[101];
    char str2[101];

    cout << "Enter a huge number1 (length<101) : ";
    cin >> str1;
    cout << "Enter a huge number2 (length<101) : ";
    cin >> str2;
    addStrings(str1, str2);

    return 0;
}
