#include <iostream>
using namespace std;
int main() 
{ 
     int n,i,c=0,d=0,count=0;
     cin>>n;
     if(n>=2&&n<=100)
     {
     int a[n];
     for(i=0;i<n;i++)
     {
         cin>>a[i];
         
     }
     if(a[0]==0&&a[n-1]==0)
     {
     for(i=c;i<n-2;i++)
     {
         if(a[i]>=0&&a[i]<=1&&a[i]!=1)
         {
             if(a[i+2]!=1)
             {
            count++;
            c=i+2;
            }
             else if(a[i+1]!=1)
                {
              count++;
            }
         }
     }
     cout<<count;
     }
     }
    return 0;
}

