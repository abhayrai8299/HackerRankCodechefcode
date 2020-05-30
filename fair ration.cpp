#include <iostream>
using namespace std;
int main() 
{
	int i,j,p=0,count=0,b[100],n;
	cin>>n;
	int a[n];
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]%2!=0)
		{
			a[i]++;
			b[++j]=i;
			count++;
		}
	}
	if(count>1)
	{
	for(i=1;i<=j;i++)
	{
	    b[i-1]++;
		b[i+1]++;
		count++;	 
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]%2!=0)
		{
			a[i]--;
			count--;
		}
	}
	cout<<count<<endl;
    }
    else cout<<"NO";
	return 0;
}
