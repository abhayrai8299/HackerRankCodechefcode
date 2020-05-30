 #include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j,n,sum1=0,sum2,diff;
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
		sum1+=a[i][j];
		 else if(i+j==n-1)
		sum2+=a[i][j];
	    }
    }
    diff=sum2-sum1;
    printf("diiference=%d",sum2);
}
