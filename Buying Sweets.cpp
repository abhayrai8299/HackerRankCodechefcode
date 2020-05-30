#include <iostream>
#include <algorithm> 
  
using namespace std;
int main()
{
	int t, i;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n], sum = 0, count = 0;
		for (i = 0; i < n; i++)
		{
			cin >> a[i];
			
		}
		sort(a,a+n);
		for(i=0;i<n;i++)
		{
			sum += a[i];
		}
		int sweets = sum / k;
		int diff = sum - (sweets * k);
		for (i = 0; i < n; i++)
		{
			if (a[i]<=diff)
			{
				count++;
			}
		}
		if (n-count > count)
		{
			cout << sweets << endl;
		}
		else
		{
			cout << "-1" << endl;
		}
	}
	return 0;
}
