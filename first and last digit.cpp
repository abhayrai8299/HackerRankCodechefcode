#include <iostream>
#include <math.h> 
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,d,count=0,c;
		cin>>n;
		c=n;
		int sum=0;
		sum=n%10;
		while(n>0)
		{
			d=n%10;
			count++;
			n=n/10;
		}
		   if(count>1)
		   {
		   	long long int b=(int)pow(10,count-1);
		     sum+=c/b;
	       } 
	    cout<<sum<<endl;
	}
	return 0;
}
