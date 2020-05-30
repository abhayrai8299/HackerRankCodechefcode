#include <iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=*a;
}
int partition(int arr[],int lb,int ub)
{
	int pivot=arr[lb];
	int start=lb;
	int end=ub;
	while(start<end)
	{
		while(arr[start]<=pivot)
		{
			start++;
		}
		while(arr[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			swap(arr[start],arr[end]);
		}
	}
	swap(arr[lb],arr[end]);
	return end;
}
void quicksort(int arr[],int lb,int ub)
{
	if(lb<ub)
	{
		int loc=partition(arr,lb,ub);
		quicksort(arr,lb,loc-1);
		quicksort(arr,loc+1,ub);
	}
}
void printarray(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		cout<<arr[i];
	}
	cout<<endl;
}
int main()
 {
 	int n;
 	cin>>n;
 	int arr[n];
 	for(int i;i<n;i++)
 	{
 		cin>>arr[i];
	}
	quicksort(arr,0,n-1); 
    printarray(arr,n); 
	return 0;
}
