#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
	{
        int n;
        long int count=0;
        cin>>n;
        long int a[100];
        for(int i=0;i<n;i++)
		{
            cin>>a[i];
        }
        for(int i=1;i<n;i++){
            count+=a[i]-a[0];
        }
        cout<<count<<"\n";
    }
    return 0;
}


