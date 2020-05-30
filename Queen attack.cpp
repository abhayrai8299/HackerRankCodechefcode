#include <iostream>
using namespace std;
int main()
{
	int n, obstacle, i, j, count = 0, obs1, obs2;
	cin >> n >> obstacle;
	if (n > 1)
	{
		int a[n+1][n+1];
		int r_queen, c_queen;
		cin >> r_queen >> c_queen;
		a[r_queen - 1][c_queen - 1] = 0;
		r_queen = r_queen - 1;
		c_queen = c_queen - 1;
		j = c_queen;
		for (i = 0; i < n; i++)
		{
			if (a[i][j] != 0)
			{
				a[i][j] = 0;
				count++;
			}
			else break;
		}
		for (i = 0; i < n; i++)
		{
			if (a[j][i] != 0)
			{
				a[j][i] = 0;
				count++;
			}
			else break;
		}
		if (obstacle > 0)
		{
			for (i = 0; i < obstacle; i++)
			{
				cin >> obs1 >> obs2;
				a[obs1][obs2] = 0;
			}
		}
		if (r_queen + 1 <= n - 1 && a[r_queen + 1][c_queen] != 0)
		{
			count++;
		}
		if (r_queen - 1 <= n - 1 && a[r_queen - 1][c_queen] != 0)
		{
			count++;
		}
		if (c_queen + 1 <= n - 1 && a[r_queen][c_queen + 1] != 0)
		{
			count++;
		}
		if (c_queen - 1 <= n - 1 && a[r_queen][c_queen - 1] != 0)
		{
			count++;
		}
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (a[i][j] != 0)
				{
					if (i + j == (r_queen + c_queen))
					{
						count++;
					}
				}
				else break;
			}
		}
		i = r_queen - 1;
		j = c_queen - 1;
		if (i < j)
		{
			while (i < j && i >= 0)
			{
				if (a[i][j] != 0)
				{
					count++;
					--i;
					--j;
				}
				else break;
			}
		}
		else if (i > j)
		{
			while (i > j && j >= 0)
			{
				if (a[i][j] != 0)
				{
					count++;
					--i;
					--j;
				}
				else break;
			}
		}
		i = r_queen + 1;
		j = c_queen + 1;
		if (i > j)
		{
			while (i > j && i < n )
			{
				if (a[i][j] != 0)
				{
					count++;
					++i;
					++j;
				}
				else break;
			}
		}
		else if (i < j)
		{
			while (i < j && j < n)
			{
				if (a[i][j] != 0)
				{
					count++;
					++i;
					++j;
				}
				else break;
			}
		}
		i = r_queen - 1;
		j = c_queen - 1;
		if (i == j)
		{
			while (i >= 0 )
			{
				if (a[i][j] != 0)
				{
					count++;
					--i;
					--j;
				}
				else break;
			}
		}
		i = r_queen + 1;
		j = c_queen + 1;
		if (i == j)
		{
			while (i < n)
			{
				if (a[i][j] != 0)
				{
					count++;
					++i;
					++j;
				}
				else break;
			}
		}
		cout << count << endl;
	}
	else cout << "0";
	return 0;
}
