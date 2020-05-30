#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	unsigned long long a;
	cin >> a;
	int rem = a%6;
	if(rem == 0 || rem == 1 || rem == 3) cout << "yes" << endl;
	else cout << "no" << endl;
	return 0;
}
