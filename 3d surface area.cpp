#include <iostream>
using namespace std;
int main() 
{
	int row,col,u,d,l,r,t,b,i,j,area=0;
	cin>>row>>col;
	int a[row][col];
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			t=b=u=d=l=r=0;
			int cur=a[i][j];
			if(cur!=0)
			{
				t++;
				b++;
			}
			if(i-1>=0)
			{
				if(cur>a[i-1][j])
				{
					u=cur-a[i-1][j];
				}
			}
			else u=cur;
			if(i+1<row)
			{
				if(cur>a[i+1][j])
				{
					d=cur-a[i+1][j];
				}
			}
			else d=cur;
			if(j-1>=0)
			{
				if(cur>a[i][j-1])
				{
					l=cur-a[i][j-1];
				}
			}
			else l=cur;
			if(j+1<col)
			{
				if(cur>a[i][j+1])
				{
					r=cur-a[i][j+1];
				}
			}
			else r=cur;
			area=area+t+b+l+r+u+d;
		}
	}
	cout<<area;
	return 0;
}
