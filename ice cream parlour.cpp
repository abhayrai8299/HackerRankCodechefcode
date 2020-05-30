#include <iostream>
using namespace std;
int main() 
{
    long int m,n,i,j,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
    cin>>m>>n;
    long int a[10000],c,d,sum=0;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            sum=a[i]+a[j];
            if(sum==m)
            {
                c=i;
                d=j;
            }
            else
            {
                sum=0;
            }
        }
    }
    cout<<c<<" "<<d<<endl
    }
    return 0;
}

