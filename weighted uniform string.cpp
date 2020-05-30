#include <iostream>
#include <string>
using namespace std;
int main() 
{
	string s;
	int i,j,h[26],b[100],n,t,take,flag=0,p=0;
	cin>>s;
	cin>>n;
	for(i=1;i<=26;i++)
	{
		h[i]=0;
	}
	for(i=0;s[i]!='\0';i++)
	{
		int j=s[i]-96;
		h[j]+=j;
		b[++p]=h[j];
	}
	while(n>0)
	{
	  cin>>t;
	  flag=0;
	for(i=1;i<=p;i++)
	{
		if(b[i]==t)
		    flag=1;
	}
	if(flag==1)
	    cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	--n;
    }
	return 0;
}
