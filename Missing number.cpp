#include <iostream>
using namespace std;
int main()
{
    int n, m, i, j, p = 0;
    int a[100000] = { 0 }, b[100000] = { 0 }, c[100000] = { 0 }, h[100000] = { 0 };
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    for (j = 1; j <= m; j++)
    {
        cin >> b[j];
    }
    for (i = 1; i <= n; i++)
    {
        h[a[i]]++;
    }
    for (j = 1; j <= m; j++)
    {
        h[b[j]]--;
    }
    for (i = 1; i < 10000; i++)
    {
        if (h[i] > 0)
            c[p++] = h[i];
    }
    for (i = 0; i < p; i++)
    {
        cout << c[i] << " ";
    }
    return 0;
}
