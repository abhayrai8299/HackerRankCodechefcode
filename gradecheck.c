#include <stdio.h>
#include <stdlib.h>
int main()
{
	int grade[100],grade1[100],i,n,a,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&grade[i]);
	}
	for(i=0;i<n;i++)
	{
		if(grade[i]>=38)
		{
			grade1[i]=grade[i];
			c=(grade[i]%5);
			if(c==0)
				printf("%d\n",grade[i]);
			else
			a=5-c;
			grade[i]=grade[i]+a;
			if(c<3)
			printf("%d\n",grade1[i]);
			else if(c==3)
			printf("%d\n",grade[i]);
		}
		else 
		printf("%d\n",grade[i]);
		}
	}
