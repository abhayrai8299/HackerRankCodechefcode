#include <iostream>
using namespace std;
int main() 
{
	int n,a[100],i,j,count,min,max,d;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		count++;
	}
     min=a[0];
     while(count!=0)
     {
     for(i=0;i<n;i++)
	 {
	 	if(a[i]!=0)
	 	{
	 		if(a[i]<min)
	 		min=a[i];
		 }
	 }
	 count=n;
     for(i=0;i<n;i++)
     {
     	if(a[i]!=0)
         {
     		a[i]=a[i]-min;
		 }
		 else count--;
	 }
	 cout<<count<<endl;
	 if(count==1)
	   count=0;
    }
	 
	 
	return 0;
}
