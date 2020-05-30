#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b;
		cin>>n>>a>>b;
		cout<< (a | b) & (~a | ~b);
	}
	return 0;
}
