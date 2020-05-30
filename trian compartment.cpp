#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	char s[] = "WMAAMW";
	int n, a[103], i, j;
	cin >> n;
	for (i = 1; i <= 102; i + 6)
	{
		int d = i + 11;
		for (j = d; j >= d - 5; j--)
		{
			a[i++] = j;
		}
	}
	if(a[n]%6!=0)
		cout << a[n] << s[a[n] %6-1] << "S";
	else cout << a[n] << s[a[n] % 6] << "S";
	return 0;
}
