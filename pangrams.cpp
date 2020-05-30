#include <iostream>
#include<cstring>
#include <string> 
using namespace std;
int main() 
{
	string s;
	char c;
	getline(cin, s); 
	int h[26]={0},i,flag=0,count=0;
	 for(int j=0;s[j]!='\0';j++)
	  {
	  	if(s[j]>=97 && s[j]<=122 && s[j]!=' ')
	  	{
	     h[s[j]-97]++;	
	    }
	    else if(s[j]>=65 && s[j]<=90 && s[j]!=' ')
	    {
	    	h[s[j]-65]++;
		}
      }
      for(i=0;i<26;i++)
      {
      	cout<<h[i]<<" ";
      	if(h[i]==0)
      	  flag=1;
	  }
	  if(flag==0)
	  {
   	   cout<<"pangram";
      }
       else cout<<"not pangram";
     	return 0;
}
