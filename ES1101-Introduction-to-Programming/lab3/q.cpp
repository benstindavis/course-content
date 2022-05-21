#include <iostream>

using namespace std;

int main()
{
    int i, n, a, j, k, flag1 = 1, flag2 = 1;
    cout << "enter no:";
    cin >> n;
    for (i = 2;i <= n / 2;i++)
    {
        flag1 = 1;
        flag2 = 1;
        for (j = 2;j < i;j++)
        {
            if (i % j == 0)
            {
                flag1 = 0;
                break;
            }
        }
        if (flag1) {
            a = n - i;
            for (k = 2;k < a;k++)
            {
                if (a % k == 0)
                {
                    flag2 = 0;
                    break;
                }
            }
            if(flag2){
                break;
            }
        }
        
    }
    if (flag1 && flag2)
        cout << n << " can be expressed as a sum of 2 prime nos.";
    else
        cout<<"no u";


    return 0;
}