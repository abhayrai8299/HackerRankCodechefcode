#include <iostream>
using namespace std;
int main()
{
	 int t,b=0,a[100],d,c=0;
	 long long int n;
	cin>>t;
	while(b<t)
	{
		cin>>n;
		c=0;
	while(n>0)
	{
		d=n%10;
		if(d>0 && n%d==0)
	    c++;
		n=n/10;
	}
     cout<<c;
    }
	return 0;
}
