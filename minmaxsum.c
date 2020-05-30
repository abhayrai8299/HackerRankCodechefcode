#include<stdio.h>
int main()
{
    unsigned long long int a[5],max,min,sum=0;
    int i;
    for(i=0;i<5;i++)
    {
        scanf("%lld",&a[i]);
    }
    min=max=a[0];
    for(i=0;i<5;i++)
    {
         if(max<a[i])
            max=a[i];
        if(min>a[i])
            min=a[i];
        sum=sum+a[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
