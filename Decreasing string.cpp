#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int a=k/25;
        int b=k%25;
        if(b>0){
        while(b>=0){
            cout<<char('a'+b);
            b--;
        }
    }
        for(int i=0;i<a;i++){
            for(int j=0;j<26;j++)
            cout<<char('z'-j);
        }
        cout<<endl;
    }
    return 0;
}
