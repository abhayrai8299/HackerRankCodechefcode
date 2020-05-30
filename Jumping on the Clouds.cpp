#include <iostream>
using namespace std;
int main() 
{
    int i,e=100,k,a[100],n;
    cin>>n;
    cin>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(n%k!=0)
        {
        if(a[(i+k)%n]==1)
            e=e-3;
        else
            e=e-1;
        }
        else if(n%k==0)
        {
            if(a[i+k]==1)
            {
            e=e-3;
            i=i+k;
            }
            else if(a[i+k]==0)
            {
            e=e-1;
            i=i+k;
            }
       }
    }
    if(n%k==0)
    {
    e=e-1;
   }
    cout<<e;
    
    return 0;
}
 
