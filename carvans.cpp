#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,i;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    vector<int>a(n);
	    for(i=0;i<n;i++)
	    cin>>a[i];
	    int temp=a[0],count=1;
	    for(i=1;i<n;i++)
	    {
	        if(temp>a[i])
	        {
	        count++;
	        temp=a[i];
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}

