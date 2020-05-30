#include <iostream>
using namespace std;
int main() 
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int count=0;
		while(n>0)
		{
			if(n%10==4)
			{
			   count++;
		    }
		    n=n/10; 
		}
		cout<<count<<endl;
	}
	return 0;
}
