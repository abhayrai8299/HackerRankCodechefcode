#include <iostream>
#include<stdlib.h>
#include<bits/stdc++.h> 
using namespace std;
int main() 
{
	char s[20],c,str[20];
	int i,j,count=0,p=0,min=INT_MAX,sum=0;
	int h[26]={0};
	cin>>s;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==s[i+1])
		{
			c=s[i];
		}
	}
	for(i=0;s[i]!='\0';i++)
	  {
		if(s[i]!=c)
		{
			str[p++]=s[i];
		}
      }
      for(p=0;str[p]!='\0';p++)
      {
      	 h[str[p]-97]++;
	  }
	  for(i=0;i<26;i++)
	  {
	  	if(h[i]>0)
	  	{
	  	    if(min>h[i])
	  	     min=h[i];
	  	}
	  }
	  for(i=0;i<26;i++)
	  {
	  	if(h[i]!=min &&h[i]>0)
	  	    sum+=h[i];
	  	}
	  	cout<<sum;
	return 0;
}
