#include <iostream>
#include<cstring>
using namespace std;
int main() 
{
     string s;
     string sos="SOS";
     int error=0;
     cin>>s;
     int c=strlen(s);
     for(int i=0;i<c;i++)
     {
     	if(s[i]!=s[i%3])
     	{
     		error++;
		 }
	 }
	 cout<<error;
	 return 0;
}
