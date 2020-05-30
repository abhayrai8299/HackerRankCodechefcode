#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin>>s;
	int first,flag=0,second,startlen,i,h[26]={0};
	int len=s.length();
	first=len/2;
	second=first;
	for(i=0;i<first;i++)
	{
		h[s[i]-97]++;
	}
	if(len%2==0)
		startlen=len/2;
	else startlen=len/2+1;
	for(i=startlen;i<len;i++)
	{
		h[s[i]-97]--;
	}
	for(i=0;i<26;i++)
	{
		if(h[i]>0)
		{
		    flag=1;
		    break;
		}
	}
	if(flag==0)
	{
		cout<<"YES"<<endl;
	}
	else cout<<"NO"<<endl;
  }
	return 0;
}
