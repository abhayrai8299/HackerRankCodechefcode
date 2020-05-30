#include <iostream>
#include<cstring>
using namespace std;
int main() 
{
	string s,t;
	int n;
	cin>>n;
	while(n>0)
	{
	cin>>s>>t;
	int len=s.length();
	int len2=t.length();
	int h[26]={0},i,j,count=0;
	for(i=0;i<len;i++)
	{
		if(h[s[i]-'a']==0)
	     	 h[s[i]-'a']++;
	}
	for(j=0;j<len2;j++)
	{
	   if(h[t[j]-'a']==1)
		    h[t[j]-'a']++;
	}
	for(i=0;i<26;i++)
	{
		if(h[i]>1)
		{
			count++;
		}
	}
	if(count>0)
	    cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	--n;
   }
	return 0;
}
