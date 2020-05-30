#include<stdio.h>
int main()
{
    long int sum=0;
    int a[5],i;
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    for(i=0;i<5;i++)
    sum=sum+a[i];
    printf("%li",sum);
    return 0;
    
}
