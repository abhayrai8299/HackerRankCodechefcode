#include <stdio.h>
#include <stdlib.h>
int main()
{
	long long int p[100000],q[10000],s,t,a,b,m,n;
	int i,d,count=0,count1=0;
	scanf("%lld\t",&s);
	scanf("%lld\n",&t);
	scanf("%lld\t",&a);
	scanf("%lld\n",&b);
	scanf("%lld\t",&m);
	scanf("%lld\n",&n);
	if(s>=1&&s<=100000&&t>=1&&t<=100000&&a>=1&&a<=100000&&b>=1&&b<=100000&&m>=1&&m<=100000&&n>=1&&n<=10000&&a<s<t<b)
	{
	for(i=1;i<=m;i++)
	{
		scanf("%lld",&p[i]);
		p[i]=a+p[i];
	}
		for(i=1;i<=n;i++)
	{
		scanf("%lld",&q[i]);
		q[i]=b+q[i];
	}
		for(i=1;i<=m;i++)
		{
		if(p[i]>=s&&p[i]<=t)
		count++;
	    }
	    for(i=1;i<=n;i++)
		{
		if(q[i]>=s&&q[i]<=t)
		count1++;
	    }
    printf("%d\n%d",count,count1);
}
	 
	
}
