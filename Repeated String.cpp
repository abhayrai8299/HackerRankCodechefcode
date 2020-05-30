#include <iostream>
using namespace std;
int main()
{
	long long int count=0,i,n,len,p,q;
	string s;
	cin>>s;
	cin>>n;
	 len=s.size();
	 p=n/len;
    	q=n%len;
	for(i=0;i<len;i++)
	{
		if(s[i]=='a')
		count++;
	}
	count=count*p;
	for(i=0;i<q;i++)
	{
		if(s[i]=='a')
		count++;
	}
	cout<<count;
		return 0;
}
