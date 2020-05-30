#include <iostream>
#include <bits/stdc++.h>
#include <utility>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,s2,s3;
		cin>>s;
		int len=s.length();
		int div=len/2;
		int i,j,count=0;
		for(i=0;i<div;i++)
		{
          s2[i]=s[i];
		}
		sort(s2.begin(), s2.end());
		auto res = unique(s2.begin(), s2.end());
		s2=string(s2.begin(), res) ;
		j=0;
		for(i=div;i<len;i++)
		{
			s3[j++]=s[i];
		}
		sort(s3.begin(), s3.end());
		auto res = unique(s3.begin(), s3.end());
		s3=string(s3.begin(), res) ;
		for(i=0;i<div;i++)
     	{
		for(j=div;j<len;j++)
		    {
			if(s2[i]!=48 &&s3[j]!=48&&s2[i]==s3[j])
			    {
				count++;
				s3[j]=48;
				s2[i]=48;
				j=len;	
		    	}
	    	}
	    }
	    cout<<count<<endl;
	}
	return 0;
}
