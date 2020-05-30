#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    long long int count=0;
	    for(long long int i=0;i<s.length();i++)
	    {
	        if(s[i]!='4' && s[i]!='7')
	        count++;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}

