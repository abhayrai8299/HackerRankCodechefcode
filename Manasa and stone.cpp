#include <bits/stdc++.h>
using namespace std;
void fun()
{
    int ans=0,n,a,b;
    cin>>n>>a>>b;
    if(a>b)
    {
        a+=b;
        b=a-b;
        a-=b;
        ans=a*(n-1);
    }
    else if(a==b)
    {
        a=0;
        ans=b*(n-1);
    }
    else{ans=a*(n-1);}
    while(ans<=b*(n-1))
    {
        cout<<ans<<" ";
        ans+=b-a;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        t--;
        fun();
        cout<<endl;
    }
}
