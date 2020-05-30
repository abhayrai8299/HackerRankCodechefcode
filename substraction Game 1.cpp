#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t,n,a,b;
    cin>>t;
    while(t--)
	{
        cin>>n>>a;
        n--;
        while(n--)
		{
            cin>>b;
            a=__gcd(a,b);
        }
        cout<<a<<endl;
      }
	return 0;
}

