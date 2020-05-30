#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t,d=0;
	cin>>t;
	while(t--)
	{
	d=0;
	char text[100],str[100];
	cin>>text>>str;
	for(int i=d;i<strlen(str);i++)
	{
	for(int j=0;j<strlen(text);j++)
	{
	    if(text[j]==str[i])
	    {
	        d++;
	       break;
	   }
	}
	}
	cout<<d<<"\n";}
	return 0;
}

