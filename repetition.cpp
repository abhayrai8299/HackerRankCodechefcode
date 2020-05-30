#include <iostream>
using namespace std;
int main() 
{
	 int count=1,n,countspace=0,countalphabet=0,q=1;
	 int  i,j;
	cin>>n;
	char a[n],b[26];
	for(int p=1;p<=n;p++)
	{
	   cin>>a[p];
	   if(a[p]=='_')
	   {
	   	countspace++;
	   }
	   if(a[p]>=65 && a[p]<=90)
	   	   {
	   		countalphabet++;
		   }
    }
    for(i=1;i<=n-1;i++)
    {
    	for(j=i+1;j<=n;j++)
    	{
    		if(a[i]==a[j]&&a[i]!=48 &&a[j]!=48)
    		{
    			b[q]=count++;
			}
		}
		cout<<b[q];
		count=1;
	}
	for(i=1;i<=q;i++)
	{
		cout<<b[i]<<endl;
	}
	return 0;
}

