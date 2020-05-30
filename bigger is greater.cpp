#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		string s, str;
		int c = -1, i, temp = 0, j, flag = 0,count=1;
		cin >> s;
		str = s;
		int len = s.length();
		for (i = 0; i < len-1; i++)
		{
			if (s[i] == s[i + 1])
			{
				flag = 0;
			}
			if (s[i] > s[i + 1] || s[i] == s[i + 1])
			{
				count++;
			}
			else
			{
				flag = 1;
				break;
			}
		}
		if (flag!=0 && count!=len)
		{
			for (i = len - 1; i >= 1; i--)
			{
				if (s[i]>0 && s[i] < s[i - 1])
				{
					flag = 1;
				}
				else
				{
					c = i - 1;
					break;
				}

			}
			if (flag != 0)
			{
				for (i = c + 1; i < len - 1; i++)
				{
					for (j = i + 1; j < len; j++)
					{
						if (s[i] > s[j])
						{
							temp = s[i];
							s[i] = s[j];
							s[j] = temp;
						}
					}
				}
				int d;
				for (i = c + 1; i < len; i++)
				{
					if (s[i] > s[c])
					{
						j =c;
						while (j < len)
						{
							if (s[i] != str[j])
							{
								++j;
							}
							else
							{
								d = j;
								j = len;
							}
						}
						temp = str[d];
						str[d] = str[c];
						str[c] = temp;
						break;
					}
				}
				for (i = c + 1; i < len - 1; i++)
				{
					for (j = i + 1; j < len; j++)
					{
						if (str[i] > str[j])
						{
							temp = str[i];
							str[i] = str[j];
							str[j] = temp;
						}
					}
				}
				cout << str << endl;
			}
			else cout << "no answer" << endl;
		}
		else cout << "no answer" << endl;
	}
	return 0;
}
