#include<stdio.h>
int main()
{
    int a[100],b[100],i,n,c=0,d=0,e=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
      for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
      for(i=0;i<n;i++)
    {
        if(a[i]>b[i])
        c+=1;
        else if(a[i]<b[i])
        d+=1;
    }
    printf("%d %d",c, d);
}
