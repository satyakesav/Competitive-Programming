#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	string a,b; cin>>a; cin>>b;
    string ans;
    ans = ans + a[0];
    for(int i=1;i<a.length();i++)
    {
        if (a[i]>=b[0]) break;
        ans = ans + a[i];
    }
    ans = ans+b[0];
    cout<<ans<<endl;
    return 0;
}