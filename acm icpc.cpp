#include <iostream>
using namespace std;
int main() 
{
	int i,j,k,n,m,max=0,max1=0,count=0;
	cin>>n>>m;
	int a[n][m];
	for(i=0;i<n;i++)
     	{
		for(j=0;j<n;j++)
         	{
	        	cin>>a[i][j];
           }
        }
        for(i=0;i<n;i++)
        {
        	for(j=i+1;j<n;j++)
        	{
        		count=0;
        		for(k=0;k<n;k++)
        		{
        			if(a[i][k]==1 && a[j][k]==1 )
        			count++;
        			else if( a[i][k]==0 && a[j][k]==1)
        			count++;
        			else if(a[i][k]==1 && a[j][k]==0)
				    count++;
				}
				if(count>max)
				max=count;
			}
		}
		cout<<max;
	return 0;
}

