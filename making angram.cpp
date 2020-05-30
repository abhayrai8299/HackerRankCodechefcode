#include <iostream>
#include<cstring>
#include <cstdlib>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int i, h[26] = { 0 }, j, count = 0;
    int len = s.length();
    int len2 = t.length();
    for (i = 0; i < len; i++)
    {
        h[s[i] - 'a']++;
    }
    for (j = 0; j < len2; j++)
    {
              h[t[j] - 97]--;
    }
    for (i = 0; i < 26; i++)
    {
        if (h[i] != 0)
            count += abs(h[i]);
    }
    cout << count;
    return 0;
}
