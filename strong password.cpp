#include <iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;
int main() 
{
	int digit=0,special=0,lower=0,upper=0,min=0,n;
	char pass[100];
	cin>>n;
	cin>>pass;
	int len=strlen(pass);
	for(int i=0;pass[i]!='\0';i++)
	{
          if(pass[i]>=97 && pass[i]<=122)
          {
          	  lower++;
		  }
		  else if(pass[i]>=65 && pass[i]<=90)
		  {
		  	upper++;
		  }
		  else if(pass[i]>=48 && pass[i]<=57)
		  {
		  	digit++;
		  }
		  else if(pass[i]==33 || pass[i]==64 ||pass[i]==35 || pass[i]==36 ||pass[i]==37 ||pass[i]==94||pass[i]==38|| pass[i]==42||pass[i]==40|| pass[i]==41||pass[i]==45|| pass[i]==43)
		  {
		  	special++;
		  }
	}
	   if(n>=6)
    	{
		if(lower==0)
		    min++;
		else if(upper==0)
		    min++;
		else if(digit==0)
		    min++;
		else if(special==0)
		    min++;
        }
        else  if(n<6)
		{ 
		min=6-len;
	    }
    cout<<min;
	return 0;
}
