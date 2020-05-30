#include <iostream>
using namespace std;
int main()
{
	long int bound=3,t;
	cin>>t;
	while(t>bound)
	{
		t=t-bound;
		bound=bound*2;
	}
	cout<<(bound-t+1);
	return 0;
}
