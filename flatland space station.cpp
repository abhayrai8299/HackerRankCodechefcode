#include <iostream>
#include<bits/stdc++.h> 
#include <cstdlib>
using namespace std;
int main() 
{
	int n,m,min=0,i,j,max=0,x;
	cin>>n>>m;
	int a[i];
	for(i=0;i<m;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		min=INT_MAX;
		for(j=0;j<m;j++)
		{
			x=abs(a[j]-i);
			if(x<min)
			min=x;
		}
		if(max<min)
		max=min;
	}
	cout<<max;
	return 0;
}
