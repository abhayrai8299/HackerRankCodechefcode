#include <iostream>
using namespace std;
int main() 
{
    int d1,d2,m1,m2,y1,y2,a=0,b=0,count=0,count1=0,fine=0;
    cin>>d1>>m1>>y1>>d2>>m2>>y2;
    if(d1>=1&&d1<=31&&d1>=1&&d2<=31&&m1>=1&&m1<=12&&m2>=1&&m2<=12&&y1>=1&&y1<=3000&&y2>=1&&y2<=3000)
    {
    if(y1-y2>0)
    {
    fine+=1000;
    }
    else if(y1-y2==0)
    {
        
        if(m1-m2>0)
        {
            a=m1-m2;
            fine+=500*a;
        }
        else if (m1-m2==0)
        {
            if(d1-d2>0)
            {
                b=d1-d2;
                fine+=15*b;
            }
        }
    }
    if(y1-y2<=0&&d1-d2<=0&&m1-m2<=0)
    {
        fine=0;
    }
    cout<<fine;
    }
    return 0;
}

