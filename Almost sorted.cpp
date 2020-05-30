#include <iostream>
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    long int n;
    cin >> n;
   long int a[100000], b[1000000], i, poscount = 0, k = 0, flag = 0;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    if (n == 2)
    {
        for (i = 1; i <= n - 1; i++)
        {
            if (a[i] > a[i + 1])
                flag = 1;
            cout << "yes\n" << "swap " << i << " " << i + 1 << endl;
        }
    }
    else if (flag == 0)
    {
        for (i = 1; i <= n; i++)
        {
            if (a[i] == i)
            {
                poscount++;
            }
        }
        int c = abs(poscount - n);
        i = 1;
        if (c >= 2)
        {
            while (i <= n)
            {
                if (a[a[i]] != i)
                {
                    flag = 1;
                    cout << "no";
                    break;
                }
                if (a[i] == i)
                {

                }
                else b[k++] = i;
                ++i;
             }
           }
        }
        if (flag == 0)
        {
            cout << "yes\n" << "reverse " << b[0] << " " << b[k - 1] << endl;
        }
        return 0;
    }
