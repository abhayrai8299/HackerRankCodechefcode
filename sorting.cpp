#include <iostream>
#include<stdlib.h>
#include <bits/stdc++.h> 
using namespace std;
int main() 
{
	int t,n,i,j;
	cin>>t;
	long int a[1000000000];
	for(i=0;i<t;i++)
	{
		cin>>n;
		for(j=0;j<n;j++)
		{
			cin>>a[j];
		}
       n=sizeof(a)/sizeof(a[0]); 
       sort(a,a+n); 
       for(i=0;i<n;i++)
        {
    	 cout<<a[i];
	    }
	    cout<<endl;
	}
	return 0;
}
