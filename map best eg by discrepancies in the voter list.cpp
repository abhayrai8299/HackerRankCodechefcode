#include <iostream> 
#include <iterator> 
#include <map> 
using namespace std;

int main() {
	// your code goes here
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	map<int, int> m;
	int element;
	int count = 0;
	for (int i = 0; i < n1 + n2 + n3; i++)
	{
		cin >> element;
		m[element]++;
		if (m[element] == 2) count++;
	}
	map<int, int>::iterator it;
	cout << count << endl;
	for (it = m.begin(); it != m.end(); it++)
	{
		if (it->second >= 2)
		{
			cout << it->first << endl;
		}
	}
	return 0;
}
