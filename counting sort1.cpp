#include <iostream>
using namespace std;
int main() 
{
    long int i,j,max=INT_MIN,n;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		if(max<a[i])
		{
			max=a[i];
		}
	}
	   int h[max]={0};
	   for(i=0;i<n;i++)
	   {
	   	   h[a[i]]++;
	   }
	   for(i=0;i<=max;i++)
	   {
	   	cout<<h[i]<<" ";
	   }
	return 0;
}
