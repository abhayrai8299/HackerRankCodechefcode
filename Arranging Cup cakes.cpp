#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a;
	    cin>>n;
	    for(int i=sqrt(n);i>0;i--)
	    {
	        if(n%i==0)
	        {
	            a=abs(i-n/i);
	            break;
	        }
	    }
	    cout<<a<<endl;
	}
	return 0;
}

