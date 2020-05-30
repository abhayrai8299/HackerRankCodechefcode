#include <iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int h[26]={0},count=0,i;
		char s[100];
	cin>>s;
	int len=strlen(s);
	for(i=0;i<len;i++)
	{
		h[s[i]-97]++;
	}
	for(i=0;i<26;i++)
	{
		if(h[i]>0)
		      count++;
	}
	cout<<count<<endl;
	}
	return 0;
}
