#include <iostream>
using namespace std;
int main() 
{
	 int t;
	cin>>t;
	while(t--)
	{
		unsigned long long int n,k;
		cin>>n>>k;
		unsigned long long int st,te;
		st=n/k;
		te=n%k;
		if(k!=0)
		{
		cout<<st<<" "<<te<<endl;
	    }
	    else cout<<"0"<<" "<<"0"<<endl;
	}
	return 0;
}
