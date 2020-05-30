#include <iostream>
using namespace std;
int main()
{
    string s;
    long int i, h[26] = { 0 }, max = INT_MIN, flag = 0, c, count = 0;
    cin >> s;
    long int len = s.length();
    for (i = 0; i < len; i++)
    {
        h[s[i] - 97]++;
    }
    for (i = 0; i < 26; i++)
    {

        if (max < h[i])
        {
            max = h[i];
            c = i;
        }
    }
    for (i = 0; i < 26; i++)
    {
        if (max == h[i])
        {
            count++;
        }
    }
    if (count != len)
    {
        max = max - 1;
        h[c] -= 1;
        for (i = 0; i < 26; i++)
        {
            if (h[i] > 0)
            {
                if (max != h[i])
                {
                    cout << "NO";
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            cout << "YES";
        }
    }
    else cout << "YES";
    return 0;
}

