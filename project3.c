#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,n,sum1=0,sum2=0,diff=0;
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
		printf("%d\t",a[i][j]);
	}
	printf("\n");
   }
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		if(i==j)
		sum1=sum1+a[i][j];
		else if(i+j==2)
		sum2=sum2+a[i][j];
	    }
    }
    diff=sum1-sum2;
    printf("%d",diff);
}
