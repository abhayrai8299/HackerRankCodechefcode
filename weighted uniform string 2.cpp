#include <iostream>

using namespace std;

int main(){ string s; cin >> s; int n; cin >> n;
vector b(10000000);
int mul=1;

for(int j=0; j<s.size(); j++)
{
    int w = s[j]-'a'+1;
    if(s[j]==s[j-1])
     {
        mul++;
         w*=mul;
     }
    else mul=1;
    b[w]=true;

}    
for(int a0 = 0; a0 < n; a0++){
    int x;
    cin >> x;
    if(b[x]) cout << "Yes" << endl;
    else cout << "No" << endl;
}    
return 0;
}
