#include <iostream>
#include<algorithm>
#include<bits/stdc++.h> 
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int a[n],sum=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
     	}
        sort(a,a+n,greater<int>());
        for(i=0;i<n;i++)
        {
        	if(i%4<2)
        	{
        		sum+=a[i];
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
