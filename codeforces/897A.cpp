#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    int n,m; cin>>n; cin>>m;
    string s; cin>>s;
    int l,r;
    char c1,c2;
    for(int i=0;i<m;i++)
    {
        cin>>l; cin>>r; cin>>c1; cin>>c2;
        for(int j=l-1;j<r;j++)
            if (s[j]==c1) s[j]=c2;
    }
    cout<<s<<endl;
    return 0;
}