#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    int arr[n];
	    for(int i=0;i<n;i++)
    	    arr[i]=0;
    	    
	    if(str[0]=='1')
	    {
	        arr[0]=1;
	        arr[1]=1;
	    }
	    if(str[n-1]=='1')
	    {
	        arr[n-1]=1;
	        arr[n-2]=1;
	    }
	    
	    for(int i=1;i<n-1;i++)
	    {
	        if(str[i]=='1')
	        {
	            arr[i-1]=1;
	            arr[i]=1;
	            arr[i+1]=1;
	        }
	    }
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]==0)
	          sum++;
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
