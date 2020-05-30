#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x1,v1,x2,v2,rem;
    scanf("%d",&x1);
    scanf("%d",&v1);
    scanf("%d",&x2);
    scanf("%d",&v2);
    rem=(x1-x2)%(v2-v1);
    if(v1>v2)
    {
        if(rem==0)
        {
        printf("YES");
        }
       
    }
    else 
    printf("NO");
    return 0;
}
