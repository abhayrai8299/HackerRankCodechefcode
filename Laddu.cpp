#include <iostream>
#include<stdio.h> 
#include<string.h> 
using namespace std;
int main() 
{
	int t,activities,rank,laddu=0,i,severity;
	cin>>t;
	char s[100],nationality[20];
	while(t--)
	{
		cin>>activities>>nationality;
		laddu=0;
		for(i=0;i<activities;i++)
		{
			cin>>s;
			if(strcmp(s,"CONTEST_WON")==0)
			{
				cin>>rank;
				if(rank<=20)
				{
					laddu+=320-rank;
				}
				else laddu+=300;
			}
			if(strcmp(s,"TOP_CONTRIBUTOR")==0)
			{
				laddu+=300;
			}
			if(strcmp(s,"BUG_FOUND")==0)
			{
				cin>>severity;
				laddu+=severity;
			}
			if(strcmp(s,"CONTEST_HOSTED")==0)
			{
				laddu+=50;
			}
		}
		if(strcmp(nationality,"INDIAN")==0)
		{
		cout<<laddu/200<<endl;
	    }
	    else cout<<laddu/400<<endl;
	}
	return 0;
}
