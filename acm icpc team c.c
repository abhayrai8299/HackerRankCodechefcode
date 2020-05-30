#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m],b[n*m],l=0,count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%1d",&a[i][j]);
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                if(a[i][k]==1 || a[j][k]==1)
                {
                    count++;
                }
            }
            b[l]=count;
            l++;
            count=0;
        } 
    }
    int max=0,num=0;
    for(int i=0;i<l;i++)
    {
        if(b[i]>max)
        max=b[i];
    }
    for(int i=0;i<l;i++)
    {
        if(b[i]==max)
        num++;
    }
    cout<<max<<endl<<num;
    return 0;
}
