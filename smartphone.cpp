#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int n;
	cin >> n;
	long long int a[n];
	for(long long int i=0;i<n;i++)
	{
	    cin >>a[i];
	}
	long long int temp;
	long long int sum=0;
	sort(a,a+n);
	    for(long long int j=0;j<n;j++)
	    {
	        temp = a[j]*(n-j);
	    if(temp>sum)
	    {
	        sum=temp;
	    }
	}
	cout << sum;
	return 0;
}
