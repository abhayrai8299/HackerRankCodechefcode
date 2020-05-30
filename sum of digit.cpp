#include <iostream>
using namespace std;
int main() 
{
	unsigned long int n,t,i,sum;
	cin>>t;
	for(i=1;i<=t;i++)
	{
	sum=0;
	cin>>n;
	while(n>0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	cout<<sum<<endl;
   }
	return 0;
}
