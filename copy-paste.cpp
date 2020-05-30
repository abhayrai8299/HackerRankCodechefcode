#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],i,h[100001]={0},count=0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			h[a[i]]++;
		}
		for(i=0;i<100000;i++)
		{
			if(h[i]>0)
			{
				count++;
			}
		}
		if(count==n)
		{
			cout<<"0"<<endl;
		}
		else cout<<count<<endl;
	}
	return 0;
}
