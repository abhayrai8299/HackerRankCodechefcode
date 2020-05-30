#include <iostream>
using namespace std;
int main()
{
	int n,i,j,x,a[100],b[100],c[100];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(x=1;x<=n;x++)
	{
		for(j=1;j<=n;j++)
		{
			if(x==a[j])
			{
				b[x]=j;
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		c[i]=b[b[i]];
	}
		for(i=1;i<=n;i++)
	{
		cout<<c[i]<<endl;
	}
   return 0;
}
