#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        vector <long long> v;
        long long a;
        cin>>n;
        while(n--)
        {
            cin>>a;
            v.push_back(a);
        }

        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        cout<<v.size()<<endl;
    }
}

