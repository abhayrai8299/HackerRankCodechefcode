#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() 
{
     int n,i,t,rc,lc,flag=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
    cin>>n;
    int a[n];
    rc=0;
    lc=0;
    flag=0;
    for( i = 0 ; i < n ; i++)

    {
        cin>>a[i];
        rc+= a[i];
    }
    for(i=0;i<n;i++)
    {
    	if(i>=1)
    	 {
    	 	lc+=a[i-1];
		 }
		rc-=a[i];
	   if(lc==rc)
	   {
		flag=1;
		break;
	   }
	}
      if(flag==1)
          cout<<"Yes"<<endl;
    else  cout<<"No"<<endl;
    --t;
}
return 0;
}
