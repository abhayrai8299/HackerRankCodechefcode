#include <iostream>
#include <cstdlib>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int sum=0;
		int len=s.length();
		for(int i=0;i<len;i++)
		{
			if(s[i]>=48&&s[i]<=57)
			{
				sum+=abs(s[i]-48);
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}
