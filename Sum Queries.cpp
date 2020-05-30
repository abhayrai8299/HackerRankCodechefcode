#include <iostream>
using namespace std;

int main()
{ long long int n,c,max,i;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++)
   cin>>a[i];
   max=0;
   c=0;
   for(i=0;i<n;i++)
   {   if(a[i]==0)
       c=0;
       else
       c++;
       if(c>max)
       max=c;
       
       
   }
   	cout<<max;
	return 0;
}

