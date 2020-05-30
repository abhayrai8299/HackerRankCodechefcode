#include<stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];

    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int c=0, e=100;

    while((c+k)%n!=0)
    {
        e--;
        if (a[(c+k)%n]==1)
        {
            e=e-2;
        }
        c=c+k;
    }

    e--;

    if (a[0]==1){
        e=e-2;
    }

    printf("%d", e);

    return 0;
}
