#include <iostream>
using namespace std;
int main()
{
	string s = "101";
	string s1 = "010";
	string str;
	int t;
	cin >> t;
	while (t--)
	{
		cin >> str;
		int i, j, flag = 0,counts=0,count1s1=0;
		int len = str.length();
		for (i = 0; i < len - 3; i++)
		{
			int p = 0, k = 0, count = 0, count1 = 0, flag = 0;
			for (j = i; j < i + 3; j++)
			{
				if (s[k++] == str[j])
				{
					count++;
				}
				 if (s1[p++] == str[j])
				{
					count1++;
				}
			}
				if(count==3)
				{
					counts = 1;
			    }
				else if (count1 == 3)
				{
					count1s1 = 1;
				}
		}
		if (counts == 1 && count1s1 == 1)
		{
			cout << "Good" << endl;
		}
		else cout << "Bad" << endl;
	}
	return 0;
}
