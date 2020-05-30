#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    string good1 = "010", good2 = "101";

    while (t--)
    {
        string s;
        cin >> s;

        if ((s.find(good1) != string::npos) or (s.find(good2) != string::npos)) {
            cout << "Good" << '\n';
        }
        else
        {
            cout << "Bad" << '\n';
        }
    }
}
