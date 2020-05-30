#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,count=0;
		cin>>n;
		int a[n];
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(i=1;i<=n;i++)
		{
			if(a[i]==i)
			{
				count++;
			}
			else break;
		}
		if(n-count>=3)
		{
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	
	return 0;
}
