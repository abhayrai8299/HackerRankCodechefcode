#include <iostream>
using namespace std;
int main() 
{
	int n,i,count=0,count1=0,d=0,max=0;
	cin>>n;
	int a[n],b[100]={0};
	for(i=0;i<n;i++)
	{
		cin>>a[i];	
	}
	for(i=0;i<n;i++)
	{
		b[a[i]]++;
    }
	for(i=1;i<=n;i++)
	{
		if(max<b[i])
		{
		max=b[i];
	    }
	}
	cout<<n-max;
	return 0;
}
