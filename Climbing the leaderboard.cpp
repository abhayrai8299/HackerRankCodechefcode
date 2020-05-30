#include <iostream>
#include<bits/stdc++.h> 
using namespace std;
int main() 
{
	int n,max=INT_MIN,i;
	cin>>n;
	int a[n];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		if(max<a[i])
		{
		   max=a[i];
	    }
	}
	int m;
	cin>>m;
	int b[m];
	for(i=1;i<=m;i++)
	{
		cin>>b[i];
	}
	int h[max]={0},c=1,j=1,k=0,rank[n+m];
	for(i=1;i<=n;i++)
	{
		if(h[a[i]]==0)
	  {
	    h[a[i]]=c++;
	  }
	}
	for(i=1;i<=m;i++)
	{
		j=1;
		while(b[i]<a[j])
		{
			j++;
		}
		rank[k++]=h[a[j]];
		for(i=j;i<=n;i++)
		{
			h[a[i]]++;
		}
	}
	for(i=0;i<k;i++)
	{
		cout<<rank[i]<<endl;
	}
	return 0;
}
