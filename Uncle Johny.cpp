#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cin>>k;
		int c=a[--k];
         sort(a,a+n); 
         for(i=0;i<n;i++)
         {
         	if(c==a[i])
         	    {
         	    	cout<<i+1<<endl;
         	    	i=n+1;
				 }
		 }
	}
	return 0;
}
