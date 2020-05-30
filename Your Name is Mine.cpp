#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int t, i, j;
	cin >> t;
	while (t--)
	{
		int count = 0;
		string s, s2;
		cin >> s >> s2;
		int l1 = s.length();
		int l2 = s2.length();
		sort(s2.begin(), s2.end());
		sort(s.begin(), s.end());
		for (i = 0; s[i] != '\0'; i++)
		{
			for (j = 0; s2[j] != '\0'; j++)
			{
				if (s[i] == s2[j])
				{
					count++;
					j = l2-1;
				}
			}
		}
		if (count!=l1)
		{
			cout << "NO" << endl;
		}
		else	cout << "YES" << endl;
	}
}
