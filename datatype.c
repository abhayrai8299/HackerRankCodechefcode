#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,a[10],sum=0,n;
	double b[10],sum1=0.0;
	char s[50]="HackerRank",str[50]="is the best place to learn and practice coding!";
	for(i=0;i<2;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	for(i=0;i<2;i++)
	{
		scanf("%lf",&b[i]);
		sum1=sum1+b[i];
	}
	printf("%d\n%lf\n",sum,sum1);
	printf("%s %s",s,str);
	
}
