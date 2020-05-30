#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a[10][10],n,i;
    int dig,sum1=0,sum2=0;
     scanf("%d",&n);
 for(i=0;i<n;i++)
 {
     for(j=0;j<n;j++)
     {
     scanf("%d",&a[i]);
     }
 }
 for(i=0;i<n;i++)
 {
     for(j=0;j<n;j++)
        {
           if(i==j)
           sum1=sum+a[i][j];
           else if(i+j==n-1)
           sum2=sum+a[i][j];
        }
 }
 dig=sum1-sum2;
printf("%d",dig);
}






