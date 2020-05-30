#include <iostream>
#include<cstring>
using namespace std;
int main() 
{
	int i,k,count=0,count1=0,p=0,d,e,f,g;
	char str[100],str1[100],str2[100],a[100],b[100],c[100];
	cin>>str;
	cin>>str1;
	cin>>k;
	d=strlen(str);
	e=strlen(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		if(str[i]!=str1[i])
		{
			break;
		}
		else
		  a[p++]=str[i];
	}
	for(i=0;a[i]!='\0';i++)
	{
		count++;
     }
   f=d-count;
   g=e-count;
   if(f==0)
   {
   	f=k-d;
   	k=k-(f+count);
   	if(k==0)
   	cout<<"YES";
   	else
   	cout<<"NO";
   }
   else if(k-(f+g)==0)
   cout<<"YES";
   else
   cout<<"NO";
	return 0;
}
