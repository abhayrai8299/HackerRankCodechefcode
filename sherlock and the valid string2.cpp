#include <iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int a[26]={0};
    for(int i=0;i<s.size();i++)
             a[s[i]-97]++;
    int flag=1,i,value,count=0;
    for(i=0;i<26;i++)
   {   
        if(a[i]!=0)
         {
            if(flag==1)
              {value=a[i]; flag=0;}
            else
                {
                if(value!=a[i])
                {    
                    if(value==a[i]-1 || (a[i]==1))
                        count++;
                   else
                      count=-5;
                    
                    if(count==2 || count==-5)
                        break;
                 }
            }
         }
     }
    
    if(count==0 || count==1)
        cout<<"YES";
    else
        cout<<"NO";
	return 0;
}
