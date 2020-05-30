#include<iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i, arr[26] = { 0 }, count = 0, flag = 0;
    for (i = 0; s[i]; i++)
    {
        arr[s[i] - 'a']++;
    }
    for (i = 0; i < 26; i++)
    {
        if (arr[i] % 2 == 1)
        {
            count++;
        }
    }
    if (count > 1)
    {
        flag = 1;
    }
    if (flag == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
