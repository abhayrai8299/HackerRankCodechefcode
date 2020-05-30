#include<iostream>
#include <algorithm> 
using namespace std;

int main()
{
    long long n, d, i, c = 0, a[100000];

    cin >> n >> d;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    for (i = 0; i < n - 1; i++) {
        if (a[i + 1] - a[i] <= d) {
            c++;
            i++;
        }
    }
    cout << c;

    return 0;
}

