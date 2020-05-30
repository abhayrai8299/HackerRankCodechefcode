#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n, i, j;
        int count = 0, temp = 0, flag = 0, c = 0;
        cin >> n;
        int a[10000];
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (i = 1; i <= n; i++)
        {
            flag = 0;
            for (j = 1; j <= n - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    flag++;
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                    count++;
                }
                if (flag > 2)
                {
                    c = 1;
                    cout << "Too chaotic" << endl;
                    break;
                }
                else 
                {
                    flag = 0;
                }

            }
        }
        if (c==1)
            cout << count << endl;
        --t;
    }
    return 0;
}
