#include <iostream>
#include <cstdlib>
using namespace std;
int main() 
{
	long int t,i;
    cin>>t;
    while(t--)
    {
    	long int x,y,k,n,flag=0;
    	cin>>x>>y>>k>>n;
       long	int p1[n],c1[n];
    	for(i=0;i<n;i++)
    	{
    		cin>>p1[i]>>c1[i];
		}
		if(y>=x)
		{
			cout<<"LuckyChef"<<endl;
			flag=1;
		}
		if(flag!=1)
		{
	   long	int req=abs(x-y);
		 for(i=0;i<n;i++)
		 {
		    if(p1[i]>=req && c1[i]<=k)
			{
			    cout<<"LuckyChef"<<endl;
			    flag=1;	
			    break;
			}
	     }
	   }
	    if(flag==0)
	    {
	    	cout<<"UnluckyChef"<<endl;
		}
	}
	return 0;
}
