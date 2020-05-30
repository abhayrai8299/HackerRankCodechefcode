#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n,i,min=INT_MAX,diff=0,p=0;
    cin >> n;
    int a[n],b[n*2];
    
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
     n = sizeof(a) / sizeof(a[0]);
        sort(a, a+n);
        for (i = 0; i <n-1; i++)
        {
            diff=abs(a[i]-a[i+1]);
            if(min>diff)
                min=diff;
        }
        for (i=0; i<n-1;i++)
        {
            diff=abs(a[i]-a[i+1]);
            if(min==diff)
            {
                b[p++]=a[i];
                b[p++]=a[i+1];
            }
        }
        for(i=0;i<p;i++)
        {
        	cout<<b[i]<<" ";
		}
        return 0;
}

