#include <iostream>
using namespace std;
int main()
{
    unsigned long int n, count = 0, i, j, temp = 0;
    cin >> n;
    unsigned long int a[n];
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (i = 1; i <= n; i++)
    {
        while (a[i] != i)
        {
            for (j = 1; j <= n; j++)
            {
                if (a[i] == j && i != j)
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}

