#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	int w;
	cin>>w;
	while(w>0)
	{
     int  i, j, x, y, q, flag = 0, flag1 = 0, count = 0, p, r, t, m, n, o;
	string s;
	cin>>s;
	int len = s.length();
	j = len - 1;
	for (i = 0; i < j; i++)
	{
		if (s[i] != s[j])
		{
			count = 1;
			i = 0;
			x = i;
			q = i;
			j = len - 1;
			y = j - 1;
			for (t = x; t < y; t++)
			{
				if (s[t]!= s[y])
				{
					flag =1;
				}
				--y;
			}
			if (flag == 1)
			{
				i = 0;
				m = i + 1;
				r = len-1;
				j = len - 1;
				o = j;
				for (p = m; p < o; p++)
				{
					if (s[p] != s[o])
					{
						flag1 = 1;
					}
					--o;
				}
				if (flag1 == 0)
				{
					cout << q<<endl;
					break;
				}
			}
			else if (flag == 0)
			{
				cout << r << endl;
				break;
			}
		}
		--j;
	}
	if (count == 0)
	{
		cout << "-1" << endl;
	}
	--w;
   }
	return 0;
}
