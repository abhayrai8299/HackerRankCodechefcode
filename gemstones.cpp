#include <iostream>
#include <bits/stdc++.h> 
#include <cstdlib>
#include<string>
#include <cstring>
using namespace std;
int main() 
{
	char str1[100],str2[100];
	int h[26]={0},len,p=0,count=0;;
	int n,i,j;
	cin>>n;
	int y=n;
	while(n>0)
	{
		p=0;
		cin>>str1;
		           for(i=0;str1[i]!='\0';i++)
                         {
   	                         for(j=i+1;str1[j]!='\0';j++)
   	                         {
   	                            if(str1[i]==str1[j] && str1[i]!='_' &&str1[j]!='_')
			                        { 	
			                          str1[j]='_';
			                        }                    	
	                         }
	                              if(str1[i]!='_')
	                                {
	                                  str2[p++]=str1[i];
                                    }
                          }
     len=strlen(str2);
	                     for(j=0;j<len;j++)
	                        {
		                     h[str2[j]-97]++;
     	                    }
     	  --n;
     }
    	for(i=0;i<26;i++)
	   {
		 if(h[i]==y)
		 {
		 	count++;
		 }
	   }
	   cout<<count<<endl;
	return 0;
}

