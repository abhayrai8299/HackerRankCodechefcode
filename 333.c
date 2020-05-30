#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  
    int n,i,j,k,l;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
    	for(j=0;j<=i;j++)
    	{
    		printf("*");
		}
		printf("\n");
	}
		for(k=0;k<=n;k++)
		{
			for(l=0;l<=n-k;l++)
			{
				printf("*");
			}
			printf("\n");
		}
    return 0;
}
