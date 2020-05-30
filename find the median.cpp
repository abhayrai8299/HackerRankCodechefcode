#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
int main() 
{
	long int i,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	 n= sizeof(arr)/sizeof(arr[0]); 
       sort(arr, arr+n); 
       cout<<arr[n/2];
	return 0;
}
