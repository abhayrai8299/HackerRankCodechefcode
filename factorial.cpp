#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using boost:: multiprecision:: cpp_int;
int main() 
{
	long long int t;
	cin>>t;
	while(t--)
	{
		cpp_int n;
		cpp_int fac=1;
		cin>>n;
		for(cpp_int i=1;i<=n;i++)
		{
			fac*=i;
		}
		cout<<fac<<endl;
	}
	
	return 0;
}
