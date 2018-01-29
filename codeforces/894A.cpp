#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void recur(string& s, int ind, int& ans, int k)
{
    if (k==0)
        ans++;
    if (ind==s.length() || k==0) return;
    char ch='Q';
    if (k==2) ch='A';
    for(int i=ind;i<s.length();i++)
    {
        if (s[i]==ch)
            recur(s, i+1, ans, k-1);
    }
}

int main() {
    string s; cin>>s;
    int ans=0;
    recur(s,0,ans,3);
    cout<<ans;
}