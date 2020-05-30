#include <iostream>
#include<cstring>
using namespace std;
int main() 
{
	char orig[]="abcdefghijklmnopqrstuvwxyz";
	char origc[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alphrot[26],alphrotc[26],ualph[26];
	int k,p=0,q=0,i,j,n;
	cin>>n;
	cin>>ualph;
	cin>>k;
	for(i=k;i<26;i++)
	{
		alphrot[p++]=orig[i];
	}
	for(i=0;i<k;i++)
	{   
		alphrot[p++]=orig[i];
	}
		for(i=k;i<26;i++)
	{
		alphrotc[q++]=origc[i];
	    }
	for(j=0;j<k;j++)
	{   
		alphrotc[q++]=origc[j];
	}
	for(int i=0;ualph[i]!='\0';i++)
	{
		if(ualph[i]>=97 && ualph[i]<=122 )
		{
		   ualph[i]=alphrot[ualph[i]-97];
		}
		else if(ualph[i]>=65 && ualph[i]<=90 )
		{
		   ualph[i]=alphrotc[ualph[i]-65];
		}
	}
	for(int i=0;ualph[i]!='\0';i++)
	{
		cout<<ualph[i];
	}
	return 0;
}
