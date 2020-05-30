#include <iostream>
#include<cstring>
using namespace std;
int main() 
{
   char s[100];
   cin>>s;
   int word=0,flag=0;
   if(s[0]>=97 && s[0]<=122)
   	{
   		word=1;
   		flag=1;
	}
   for(int i=0;s[i]!='\0';i++)
   {
	if(flag==1)
	{
		if(s[i]>=65 &&s[i]<=92)
		{
               word++;
		}
	}
   }
   cout<<word;
   return 0;	
}
