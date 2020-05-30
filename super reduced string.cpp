#include <iostream>
#include<cstring>
using namespace std;
int main() 
{
	char s[20];
	int h[26]={0};
	int count=0,i,j,flag=0,p=0;
	cin>>s;
	for(i=0;s[i]!='\0';i++)
	{
		h[s[i]-97]++;
	}
	for(i=0;i<26;i++)
	{
		if(h[i]%2!=0)
		{
			flag=1;
			char c=i+97;
			cout<<c;
		}
	}
	if(flag==0)
	{
	  cout<<"Empty String";
    }
	return 0;
}
