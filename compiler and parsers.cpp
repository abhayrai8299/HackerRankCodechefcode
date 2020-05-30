#include <iostream>
#include <stack>
using namespace std;

int main() {
	// your code goes here
	int t, i;
	cin >> t;
	while (t--)
	{
		int ans = 0;

		string s;
		cin >> s;
		stack <int> a;
		for (i = 0; i < s.length(); i++)
		{
			if (s[i] == '<')
			{
				a.push(s[i]);

			}
			else if (s[i] == '>' and !a.empty())
			{
				a.pop();
				if (a.empty())
				{
					ans = i + 1;
				}
				continue;
			}
			else
			{
				break;
			}

		}
		cout << ans << "\n";
	}
	return 0;
}

