#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	string a = "abcdefghijklmnopqrstuvwxyz";
	string b = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (t--)
	{
		string s, str;
		cin >> s;
		int i, h[26] = { 0 }, k = 0, j;
		for (i = 0; s[i] != '\0'; i++)
		{
			h[k++] = s[i] - 97;
		}
		cin >> str;
		for (i = 0; str[i] != '\0'; i++)
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				for (j = 0; j < 26; j++)
				{
					if (a[j] == str[i])
					{
						cout << a[h[a[j] - 97]];
						break;
					}
				}
			}
			else if (str[i] >= 65 && str[i] <= 90)
			{
				for (j = 0; j < 26; j++)
				{
					if (b[j] == str[i])
					{
						cout << b[h[b[j] - 65]];
						break;
					}
				}
			}
			else if (str[i] == '_')
			{
				cout << " ";
			}
			else
			{
				cout << str[i];
			}
		}
	}
	return 0;
}
