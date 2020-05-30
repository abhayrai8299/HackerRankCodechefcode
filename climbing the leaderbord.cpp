#include <iostream> 
#include <vector> 
using namespace std;
int main()
{
    vector<int> scoreboard;
    int n,temp,m;
    cin>>n;
    int lastval=-1;
    for(int i=0; i<n; i++)
    {
        cin>>temp;
        if(lastval!=temp)
        {
            scoreboard.push_back(temp);
            lastval=temp;
        }
    }
    int prevrank=scoreboard.size()+1;
    cin>>m;
    int temp2;
    for(int i=0; i<m; i++)
    {
        int flag=0;
        cin>>temp2;
        int j=prevrank-2;
        while(j>=0)
        {
            if(scoreboard[j]>temp2)
            {cout<<j+2<<endl;
             flag=1;
             prevrank=j+2;
             break;}
            j--;
        }
        if(flag==0)
        {cout<<"1"<<endl;
         prevrank=1;}
        
    }
    
}
