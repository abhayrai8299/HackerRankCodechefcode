
#include<stdio.h>
int main()
 {
    int arr[5],small,large,i;
    long int sum=0;
    small=arr[0];
    large=arr[0];
    for(i=0;i<5;i++)
	{
       scanf("%d",&arr[i]);
        if(small>arr[i])
            small=arr[i];
        if(large<arr[i])
            large=arr[i];
        sum=sum+arr[i];
    }
    
    printf("%ld %ld",sum-large,sum-small);
    return 0;
}
