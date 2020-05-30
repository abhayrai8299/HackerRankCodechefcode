#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int i,j,c,n,m,flag=0,flag1=0;
	cin>>n;
	while(n>0)
	{
		c=0;
	string s;
	cin>>s;
	int len=s.length();
	m=len-1;
	for(i=0;i<m;i++)
	{
	           	flag=0;
	         	flag1=0;
	         	j=m;
	               	if(s[i]!=s[m])
	                	{
		                	c=j;
                            s[j]=s[i];
                            for(i=0;i<j;i++)
                             {
                             	if(s[i]!=s[j])
           	                      {
           		                    flag=1;
			                      }
			                  j--;
		                     }
		        if(flag==1)
		            {
		            	j=len-1;
		            	i=0;
		             	c=i;
		             	s[i]=s[j];
		             	for(i=0;i<j;i++)
		            	{
		   	          	if(s[i]!=s[j])
		   	             	{
		   		              flag1=1;	
				            }
				        j--;
		         	    }
		         }
			if(flag1==1)
			{
				cout<<"-1";
			}
		   }
		m--;
	}
	if(flag==0)
	{
		cout<<c<<endl;
	}
	else if(flag1==0)
	{
		cout<<c<<endl;
	}
	--n;
    }
	return 0;
}
