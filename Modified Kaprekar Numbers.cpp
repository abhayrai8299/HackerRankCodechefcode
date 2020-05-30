#include <iostream>
using namespace std;
int main() 
{
    int n,m,i,first,count=0,c=0,countdivide,l=0;
    long long p,q,r,s;
    cin>>p>>q;
    if(p>0&& q<100000)
    {
    for(i=p;i<=q;i++)
    {
        m=0;s=0;r=0;count=0;countdivide=0;l=0;
        m=i*i;
           s=i*i;
        r=i*i;
        if(i==1)
        {
            cout<<i<<" ";
        }
        else if(i!=1)
        {
    while (m!=0)
     {
        m/= 10;  
        count++;
     }
     if(count%2==0)
     {
     countdivide=count/2;
     }
     else countdivide=(count/2)+1;
     while(l<countdivide)
     {
         s=s/10;
          l++;
     }
     if(count==7)
     r=r%100000;
     if(count==6)
     r=r%10000;
     if(count==5)
     r=r%1000;
     if(count==4)
     r=r%100;
     else if(count==2)
     r=r%10;
     if(s+r==i)
     cout<<i<<" "; 
     c++;
     }
     }
    }
    if(c==0)
    {
        cout<<"INVALID RANGE";
    }
    return 0;
}

