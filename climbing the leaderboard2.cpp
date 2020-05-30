#include <iostream>
using namespace std;
int main()
{
	int n, max = INT_MIN, i;
	cin >> n;
	int a[10];
	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (max < a[i])
		{
			max = a[i];
		}
	}
	int m;
	cin >> m;
	int b[10];
	for (i = 1; i <= m; i++)
	{
		cin >> b[i];
	}
	int h[1000] = { 0 }, c = 1, j = 1, k = 0, rank[15],p;
	for (i = 1; i <= n; i++)
	{
		if (h[a[i]] == 0)
		{
			h[a[i]] = c++;
		}
	}
	for (i= 1;i<= m; i++)
	{
		j = 1;
		int flag = 0;
		while (b[i] < a[j] && j<=n)
		{
			j++;
		}
		if (b[i] == a[j])
		{
			flag = 1;
			rank[k++] = h[a[j]];

		}
		if (j > n)
		{
			rank[k++] = ++h[a[n]];
			--h[a[n]];
			
		}
		else if(flag==0)
		{
			rank[k++] = h[a[j]];
		}
		if (flag == 0)
		{
			a[++n] = b[i];
		}
		for (p= j; p <n; p++)
		{
			h[a[p]]++;
		}
	}
	for (i = 0; i < k; i++)
	{
		cout << rank[i] << endl;
	}
	return 0;
}
