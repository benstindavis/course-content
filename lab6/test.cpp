#include <iostream>

using namespace std;

int main()
{
    char no1[100], no2[100], sum[100];
    int carry = 0, i, digit1 = 0, digit2 = 0, n1, n2;
    cout << "enter no1 :";
    cin >> no1;
    cout << "enter no2 :";
    cin >> no2;

    for (i = 0;no1[i] != '\0';i++)
    {
        digit1++;
    }
    for (i = 0;no2[i] != '\0';i++)
    {
        digit2++;
    }
    if (digit1 > digit2)
    {        
n1 = digit2;n2 = digit1;

        for (i = 0;i < n1;i++)
        {   
            sum[i] = (no1[i] - 48) + (no2[i] - 48) + carry;
            carry = (sum[i] - 48) / 10;

        }
        for (i = n1;i < n2;i++)
        {
            sum[i] = (no1[i] - 48) + carry;
            carry = (sum[i] - 48) / 10;

        }
    }
    else if (digit1 < digit2)
    {        
n1 = digit1;n2 = digit2;

        for (i = 0;i < n1;i++)
        {
            sum[i] = (no1[i] - 48) + (no2[i] - 48) + carry;
            carry = (sum[i] - 48) / 10;

        }
        for (i = n1;i < n2;i++)
        {
            sum[i] = (no2[i] - 48) + carry;
            carry = (sum[i] - 48) / 10;

        }
    }
    else
    {
        n1 = n2 = digit1;
        for (i = 0;i < n1;i++)
        {
            sum[i] = (no1[i] - 48) + (no2[i] - 48) + carry;
            carry = (sum[i] - 48) / 10;
        }
    }
    cout << sum;
    return 0;
}