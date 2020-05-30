#include <iostream>
using namespace std;
int main() 
{
	int b,w,bc,wc,z,i,j,t,sum,count=0;
	cin>>b>>w;
	cin>>bc>>wc>>z;
   	if(b==w&&bc+z==wc+z)
	{
		count=((b*bc)+(w*wc));
	} 
	else if(z>bc&&z>wc)
	{
		count=((b*bc)+(w*wc));
	}
	else if(bc>(wc+z))
	{
		bc=wc +z;
		count=((b*bc)+(w*wc));
	}
	else  if((bc+z)<wc)
	{
		wc=bc+z;
		count=((b*bc)+(w*wc));
    }
    else if(bc+z==wc&&wc+z>bc)
    {
    	count=((b*bc)+(w*wc));
	}
	cout<<count<<endl;
	return 0;
}
