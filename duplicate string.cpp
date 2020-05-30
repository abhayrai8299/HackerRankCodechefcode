#include <bits/stdc++.h> 
using namespace std; 
int main()
{
   int i,j,p=0;
   char str[100];
   char str2[100];
   cin>>str;
   for(i=0;str[i]!='\0';i++)
   {
   	   for(j=i+1;str[j]!='\0';j++)
   	   {
   	       if(str[i]==str[j] && str[i]!='_' &&str[j]!='_')
			  { 	
			     str[j]='_';
			  }	
	   }
	   if(str[i]!='_')
	   {
	   str2[p++]=str[i];
       }
   }
   for(i=0;i<p;i++)
   {
   	     cout<<str2[i];
   }
   return 0;
}
