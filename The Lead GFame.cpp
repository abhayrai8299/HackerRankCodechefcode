#include <iostream>

using namespace std;


int main()
{
    int r,max=0,c,d,lead,leader,winner;
    int cuma=0,cumb=0;
    cin>>r;
    while(r--)
    {
        cin>>c>>d;
        cuma=cuma+c;
        cumb=cumb+d;
        if(cuma>cumb)
        {
            lead=cuma-cumb;
            leader=1;
        }
        else if(cumb>cuma)
        {
            lead=cumb-cuma;
            leader=2;
        }
        if(lead>max)
        {
            max=lead;
            winner=leader;
        }   
    }
    cout<<winner<<" "<<max;
	return 0;
}

