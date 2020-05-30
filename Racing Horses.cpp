#include <iostream>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		int n,diff=0,min=INT_MAX;
		cin>>n;
		int s[n];
		for(i=0;i<n;i++)
		{
			cin>>s[i];
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				diff=abs(s[i]-s[j]);
				if(min>diff)
				{
					min=diff;
				}
			}
		}
		cout<<min<<endl;
	}
	return 0;
}
