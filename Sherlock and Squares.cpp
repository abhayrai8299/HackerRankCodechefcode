#include <iostream>
#include<math.h>
using namespace std;
int main() 
{
    long int i,q,b,d=0,a,count=0,root,n;
    cin>>q;
    for(i=0;i<q;i++)
    {
        count=0;
        cin>>a>>b;
        root=sqrt(a);
        if(root*root==a)
        {
            count=count+1;
            root++;
        }
        else count=0;
        root++;
        while(root*root<=b)
        {
            count++;
            root++;
        }
        cout<<count<<endl;
    }
    return 0;
}

