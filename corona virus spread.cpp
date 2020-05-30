#include <iostream> 
#include<bits/stdc++.h> 
#include <algorithm> 
using namespace std;
int main()
{
	long int t;
	cin >> t;
	while (t--)
	{
		int n, flag = 0;
		cin >> n;
		int a[10], i, b[10], k = 0, count = 1,flagcount=1,max=INT_MIN,min=INT_MAX;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (i = 0; i < n - 1; i++)
		{
			int c = abs(a[i] - a[i + 1]);
			if (c<= 2)
			{
				count++;
				flagcount++;
			}
			else
			{
				b[k++] = count;
				count = 1;
			}
		}
		b[k++] = count;
		if (flagcount == n)
		{
			cout <<count<<" "<<count<<endl;
			flag = 1;
		}
		else
		{
              sort(b,b+k); 
		}
		if (flag == 0)
		{
			cout <<b[0]<< " " << b[k-1] << endl;
		}
	}
	return 0;
}
