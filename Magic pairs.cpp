#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		int i;
		cin>>n;
		long long int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<(n*(n-1)/2)<<endl;
	}
	return 0;
}
