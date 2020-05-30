#include <iostream>
#include<vector>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
          int h[100001]={0},count=0;
          long long a;
		 vector<int> g1; 
        for (int i = 1; i <= 5; i++)
		{ 
		    cin>>a;
           g1.push_back(a); 
        }
      for (i = g1.begin(); i != g1.end(); ++i) 
      {
        cout << *i << " ";
	  }
		for(i=0;i<100000;i++)
		{
			if(h[i]>0)
			{
				count++;
			}
		}
		if(count==n)
		{
			cout<<"0"<<endl;
		}
		else cout<<count<<endl;
	}
	return 0;
}
