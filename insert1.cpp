#include <iostream>
using namespace std;
int main() 
{
	int i,j,temp=0,n,p=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
		p=0;
		temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
			for(int k=0;k<n;k++)
	        {
	      	cout<<a[k]<<endl;
		     }
		}
		a[j+1]=temp;
		     for(int k=0;k<n;k++)
	      {
	      	cout<<a[k]<<" ";
		  }
		cout<<endl;
	 
	}
	return 0;
}
