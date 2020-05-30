#include <iostream>
#include<bits/stdc++.h> 
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t > 0)
	{
		long int i, sum = 0, j;
	     unsigned int n;
		cin >> n;
		  vector <int> a;
           int p;
		for (i = 0; i < n; i++)
		{
			cin>>p;
            a.push_back(p);
		}
		sort(a.begin(), a.end(),greater<int>());
		for (i = n - 1; i >= 0; i--)
		{
			if (a[i] != 0)
			{
				sum += a[i];
			}
			for (j = 0; j < i; j++)
			{
				if(a[j]>0)
				{
				a[j] -= 1;
			    }
			}
		}
		cout <<sum%1000000007<< endl;
		--t;
	}
	return 0;
}
