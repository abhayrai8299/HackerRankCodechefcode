#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int r=0,n,d;
		cin>>n;
		while(n>0)
		{
			d=n%10;
			n=n/10;
			r=r*10+d;
		}
		cout<<r<<endl;
	}
	return 0;
}
