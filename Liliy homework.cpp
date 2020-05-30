#include <iostream> 
#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int i, n, j,count=0;
	cin >> n;
	int a[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (i = 0; i < n; i++)
	{
		int min = INT_MAX, temp = 0,lowpos=0;
		int flag = 1;
		for (j =i; j < n; j++)
		{
			if (min > a[j])
				min = a[j];
			    lowpos = j;
		}
		for (j = 0; j < n - 1; j++)
		{
			if (a[j] < a[j + 1])
			{
				flag++;
			}
		}
		if (flag == n)
		{
			cout << count;
			break;
		}
		if (flag != n)
		{
			if (min < a[i])
			{
				temp = a[i];
				a[i] =a[lowpos];
				a[lowpos] = temp;
				count++;
			}
		}
	}
	return 0;
}
