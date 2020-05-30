#include<iostream>
using namespace std;
int main()
{
    int q,count=1,flag=0,n,i,j,countspace=0,countalphabet=0,p=1,m=1,notpossible=0;
    cin>>n;
    char a[n];
    int b[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
    	if(a[i]=='_')
         countspace++;
         else if(a[i]>=65 &&a[i]<=90)
         countalphabet++;
	}
    for(i=1;i<=n-1;i++)
    {
    	count=1;flag=0;
    	for(j=i+1;j<=n;j++)
    	{
    		if(a[i]==a[j] &&a[i]!=48 && a[i]!=95 &&a[j]!=95)
    		{
    			b[p]=count++;
    			flag=1;
    			a[j]=48;
    		
			}
			else if(a[i]!=a[j]&&a[i]!=48  && a[i]!=95 &&a[j]!=95)
			{
				flag=1;
			}
		}
		if(flag==1)
		{
		   b[p]=count;
		   ++p;
	    }
	}
	while(m<p)
	{
	   if(b[m]==1)
	   {
	   	
	   }
	   ++m;
	}
	if(countspace>=1 && )
	{
		cout<<"YES";
	}
	else
	   {
	   	cout<<"NO";
	   }
    return 0;
}
     
