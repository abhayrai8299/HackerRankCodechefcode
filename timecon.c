#include <stdio.h>
#include <stdlib.h>
 main()
{
	int hh,mm,ss;
	char am[]="am";
	char AM[]="AM";
	char pm[]="pm";
	char PM[]="PM";
	char a[10]="am";
	scanf("%d%d%d\n",&hh,&mm,&ss);
	if(hh>=01&&hh<=12&&mm>=00&&mm<=59&&ss>=01&&ss<=59)
		if(a==am||AM)
           printf("%d:%d:%d%s",hh,mm,ss,a);
           else if(a==pm||PM)
           hh=12+hh;
           printf("%d:%d:%d",hh,mm,ss);

	return 0;
}
