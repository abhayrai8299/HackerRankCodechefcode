#include <iostream>
#include <vector>
using namespace std;
int main() 
{
	int t,i,j;
	cin>>t;
	while(t--)
	{
		int n,count=0,count1=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n-1;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
					count++;
				}
			}
		}
		for(i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				count1++;
			}
		}
		if(count==count1)
		{
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}
