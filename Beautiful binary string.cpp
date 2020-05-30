#include <iostream>
#include <cstring>
using namespace std;
int main() 
{
	  int n,i,j,count=0;
	  cin>>n;
	  string a;
	   cin>>a;
	for(j=0;j<n-1;)
	{
		if(a[j]=='1' &&a[j-1]=='0' && a[j+1]=='0')
	     	{
				  count++;
				  j+=2;
			}
			j++;
	}
	cout<<count;
	return 0;
}
