#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int i, j, n, p = 0, k = 0, flag = 0;
		cin >> n;
		unsigned long long int a[n][n];
		int  sum[n] = { 0 }, csum[n] = {0};
		for (i = 0; i < n; i++)
		{
			for (j =0; j < n; j++)
			{
				cin >> a[i][j];
				sum[k] += a[i][j];
			}
			++k;
		}
		j =0;
		while (j < n)
		{
			for (i = 0; i <n; i++)
			{
				csum[p] += a[i][j];
			}
			++j, ++p;
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (csum[i] == sum[j])
				{
					sum[j] = 0;
					i++;
				}
			}

		}
		for (i =0; i <n; i++)
		{
			if (sum[i] > 0)
			{
				flag = 1;
				cout << "Impossible" << endl;
				break;
			}
		}
		if (flag == 0)
		{
			cout << "Possible" << endl;
		}
	}
	return 0;
}
