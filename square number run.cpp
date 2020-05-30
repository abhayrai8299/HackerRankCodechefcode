#include <iostream>
#include<math.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        int root, count = 0;
        root = sqrt(a);
        count += (root*root == a )?1:0;
        root++;
        while(root*root <= b){            
            count ++;
            root++;
        }
        cout << count << endl;
    }
    return 0;
}
