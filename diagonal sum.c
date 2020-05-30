#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[100][100],i,j,n;
	int sum1=0,sum2=0,dig;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
	    }
	}
		for(i=0;i<n;i++)
     	{
		for(j=0;j<n;j++)
		  {
		    if(i==j)
		    {
		    	sum1+=a[i][j];
			}
			if(i+j==n-1)
			sum2+=a[i][j];
	      }
	  }
	  dig=abs(sum1-sum2);
	printf("%d",dig);
	return 0;
}

