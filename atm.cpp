#include <iostream>
#include<bits/stdc++.h> 
using namespace std;
int main() 
{
	float x,y;
	cin>>x>>y;
if((int)x%5!=0 || y<(x+0.50))
printf("%.2f",y);
else
printf("%.2f",(y-x-0.50));
	return 0;
}
