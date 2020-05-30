#include<stdio.h>
int main()
{
    int a[100],b[100],i,n,alice=0,bob=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
      for(i=1;i<=n;i++)
    {
        scanf("%d",&b[i]);
    }
      for(i=1;i<=n;i++)
    {
        if(a[i]>b[i])
        alice+=1;
        else if(a[i]<b[i])
        bob+=1;
    }
    printf("%d %d",alice,bob);
    return 0;
}

