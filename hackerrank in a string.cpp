#include <iostream>
#include<cstring>
using namespace std;
int main() 
{
	char s[100];
	char a[]="hackerrank";
	cin>>s;
	int len=strlen(a);
	int flag=0,i,j,c=0;
	for(i=0;i<len;i++)
	{
		    flag=0;
		    for(j=c;j<strlen(s);j++)
			 {
			     if(s[j]==a[i])
				 {
				 	j=j+1;
				 	flag++;
				 }	
			 }
			 if(flag==0)
			 {
			    cout<<"NO";
				break;	
			 }	
	}
	  if(flag>0)
	    cout<<"YES";
	return 0;
}
