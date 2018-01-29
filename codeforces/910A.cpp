#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,d; cin>>n; cin>>d;
    string s; cin>>s;
    int i=0, count=0;
    while(i<n)
    {
        int j=i+1, ind=-1;
        while(j<=i+d && j<n)
        {
            if (s[j]=='1') ind=j;
            j++;
        }
        if (ind==-1)
        {
            cout<<"-1"<<endl; return 0;
        }
        i = ind;
        count++;
        if (i==n-1) break;
    }
    cout<<count<<endl;
    return 0;
}