#include <iostream>
#include <bits/stdc++.h>
#include <string.h> 
#include <cmath> 
#include <iomanip> 
using namespace std;
int main() 
{
	int check=0;
	string str,str1;
	int i,j,root1,root2,k=0;
	getline(cin, str); 
	int len=str.length();
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			len--;
		}
		if(str[i]!=' ')
		{
			str1[k++]=str[i];
		}
	}
	k=0;
	check=sqrt(len);
	if(check*check!=len)
	{
	root1=check;
	root2=root1+1;
    }
    else 
	{
     root1=root2=check;
    }
	for(i=0;i<=root1;i++)
	{ 
	     k=i;
		for(j=0;j<root2;j++)
		{
			cout<<str1[k];
		     k=k+root2;     
		}
		cout<<" ";
	}
	return 0;
}
