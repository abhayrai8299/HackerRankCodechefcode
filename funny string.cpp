#include <iostream>
#include <cstdlib>
#include<string>
#include <cstring>
using namespace std;
int main() 
{
     char str1[10000],str2[10000];
    int i,j,p=0,a[10000],b[10000],q=0,flag=0;
    int n;
    cin>>n;
    while(n>0 && n<=10)
    {
        flag=0;
         p=0,q=0;
     cin>>str1;
    int len=strlen(str1);
    for(i=0,j=len-1;str1[i]!='\0',j>=0;i++,j--)
    {
        str2[j]=str1[i];
    }
    for(i=0;str1[i]!='\0';i++)
    {
        a[p++]=abs(str1[i]-str1[i+1]);
    }
    for(i=0;str2[i]!='\0';i++)
    {
        b[q++]=abs(str2[i]-str2[i+1]);
    }
    for(i=0;i<len-1;i++)
    {
        if(a[i]!=b[i])
            flag=1;
    }
    if(flag==0)
    {
        cout<<"Funny"<<endl;
    }
    else
      cout<<"Not Funny"<<endl;
      --n;
     
    }
    return 0;
}
