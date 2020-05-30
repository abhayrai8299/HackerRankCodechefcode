#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
	int n, x1, x2, y1, y2, x3, y3, count = 0;
	cin >> n;
	while(n--) {
		vector<int> v;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		int s1 = pow(x2-x1, 2) + pow(y2-y1, 2);
		int s2 = pow(x3-x2, 2) + pow(y3-y2, 2);
		int s3 = pow(x1-x3, 2) + pow(y1-y3, 2);
		v.push_back(s1);
		v.push_back(s2);
		v.push_back(s3);
		sort(v.begin(), v.end());
		// cout << v[2] << " " << v[0] << " " << v[1] << endl;
		if(v[2] == v[0] + v[1]) count++;
	}
	cout << count << endl;
	return 0;
}
