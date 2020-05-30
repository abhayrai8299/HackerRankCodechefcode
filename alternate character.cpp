#include <iostream>
#include <cstring>
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int n,p,i;
    cin>>n;
    int a[n];
    while(n>0)
    {
       string s;
       int i,n,a[10],p=0,count=0;
         cin>>s;
         int len=s.length();
         cout<<len<<endl;
    for(i=0;i<len-1;i++)
    {
        if(s[i]==s[i+1])
        {
            count++;
        }
   }
   a[p++]=count;
   }
for(i=0;i<p;i++)
{
	cout<<a[i]<<endl;
}
    return 0;
}
