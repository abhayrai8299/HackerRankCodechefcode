#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i=1;
		int p=pow(2,i);
		while(p<=n)
		{
			i++;
			p=pow(2,i);
		}
		i=i-1;
		cout<<n-pow(2,i)<<endl;
	}
	return 0;
}
