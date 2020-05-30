#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		if(360%N==0)
		cout<<"y"<<" ";
		else
		cout<<"n"<<" ";
		if(N>360)
		cout<<"n"<<" ";
		else
		cout<<"y"<<" ";
		if(N*(N+1)/2<=360)
		cout<<"y"<<"\n";
		else
		cout<<"n"<<"\n";
		
		
	}
	
}
