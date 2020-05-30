#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n+1], i, c = 0,d=1, visited[n+1] = { 0 }, visited1[n+1] = { 0 },count=0;
	for (i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (i = 1; i <= n; i++)
	{
		d = i;
		if (visited1[i] == 0)
		{
			c = i;
			count++;
			while (a[i] != c)
			{
				visited1[i]++;
				i = a[i];
			}
			visited1[i]++;
			i = d;
		}
	}
	cout << count << endl;
	c = 0, d = 1;
	for (i = 1; i <= n;i++)
	{
		   d=i;
		if (visited[i] == 0)
		{
			cout << i << " ";
			c = i;
			while (a[i] != c)
			{
				visited[i]++;
				cout << a[i] << " ";
				i = a[i];
			}
			visited[i]++;
			cout << a[i] << endl;
			i =d;
		}
	}
	return 0;
}
