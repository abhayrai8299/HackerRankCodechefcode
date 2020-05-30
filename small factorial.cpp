#include <iostream>
using namespace std;
int main() 
{
	int n,t,i,fac;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		fac=1;
		cin>>n;
		while(n>0)
		{
			fac=fac*n;
			--n;
		}
		cout<<fac<<endl;
	}
	return 0;
}
