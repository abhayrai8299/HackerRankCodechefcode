#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,count=0,flag=0;
		cin>>n;
		int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			if(a[i]>2)
			{
			if(a[i]%2==0)
			{
				count++;
			}
			if(count>1)
			{
				cout<<"NO";
				flag=1;
				break;
			}
		    }
		}
		   if(flag==0)
		{
			cout<<"YES"<<endl;
		}
		
	}
	return 0;
}
