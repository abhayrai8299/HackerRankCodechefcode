#include <iostream>
using namespace std;
int main()
{
	int n1, n2, n3, i, j, count = 0, k = 0;
	cin >> n1 >> n2 >> n3;
	int a[n1], b[n2], c[n3], h[50000] = { 0 }, d[n1+n2+n3];
	for (i = 0; i < n1; i++)
	{
		cin >> a[i];
		h[a[i]]++;
	}
	for (i = 0; i < n2; i++)
	{
		cin >> b[i];
		h[b[i]]++;
	}
	for (i = 0; i < n3; i++)
	{
		cin >> c[i];
		h[c[i]]++;
	}
	for (i = 0; i <50000;i++)
	{
		if (h[i] > 1)
		{
			d[k++] = i;
			count++;
		}
	}
	cout << count << endl;
	for (i = 0; i < k; i++)
	{
		cout <<d[i]<<endl;
	}
	return 0;
}
