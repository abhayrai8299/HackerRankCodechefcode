#include <iostream>
using namespace std;
int main() 
{
	int n,i,j,d,p=0;
	cin>>n>>d;
	int a[n],b[n];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(j=d+1;j<=n;j++)
	{
		b[++p]=a[j];
	}
	for(i=1;i<=d;i++)
	{
		b[++p]=a[i];
	}
	for(i=1;i<=p;i++)
	{
		cout<<b[i];
	}
	return 0;
}
