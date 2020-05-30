#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[10],b[10],i,j=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n;i>0;i--)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;i<n;i++)
    {
       a[i]=b[i];
    }
    for(i=0;i<n;i++)
    {
         printf("%d",a[i]);
    }
  
}
