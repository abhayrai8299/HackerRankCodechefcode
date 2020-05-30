#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	    int a,b;
	    cin>>a>>b;
	    
	    int ans = a-b;
	    if(ans%10 == 9)
	        ans--;
	    else
	        ans++;
	    cout<<ans<<endl;
	return 0;
}

