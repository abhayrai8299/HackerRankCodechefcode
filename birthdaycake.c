#include <stdio.h>
#include <stdlib.h>
int main()
{
	long long int a[100],i,count=0,n,max;
	
	scanf("%lld",&n);
	scanf("%lld",&a[0]);
	max=a[0];
	for(i=1;i<n;i++)
	{
	scanf("%lld",&a[i]);	
	}
		for(i=1;i<n;i++)
	{
	   	if(a[i]>=max)
	   	max=a[i];
	}
			for(i=0;i<n;i++)
	{
	   	if(a[i]==max)
	   	count++;
	}
	printf("%d",count);
	return 0;
}
