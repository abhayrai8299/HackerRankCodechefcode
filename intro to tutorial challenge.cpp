#include <iostream>
using namespace std;
int main() 
{
	int n,v;
    cin>>v;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(v==a[i])
		{
			cout<<i;
			break;
		}
	}
	return 0;
}
