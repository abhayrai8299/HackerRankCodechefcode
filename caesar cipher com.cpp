#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <map>
#include <iterator>
#include <stack>
#include <queue>
#include <set>
#include <string>
#include <iomanip>
using namespace std;
typedef unsigned long long int ull;
typedef long double ld;
int main()
{
   int n;
   cin>>n;
   string s;
   cin>>s;
   int k;
   cin>>k;
   string a = "";
   int l = s.length();
   for (int i = 0; i < l; i++)
   {
      if (s[i]>=65&&s[i]<=90)
      {
        a += char(((int)(s[i])-65+k)%26 + 65);
      }
      else if (s[i]>=97 && s[i]<=122)
      {
        a += char(((int)(s[i])-97+k)%26 + 97);
      }
      else
      {
        a +=s[i];
      }
      
      
      
   }
   cout<<a;
  return 0;
}
