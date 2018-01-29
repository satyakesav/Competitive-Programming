#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, pos, l, r; cin>>n; cin>>pos;  cin>>l; cin>>r;
    int ret=0;
    if (abs(pos-r)<abs(pos-l))
    {
        if (r<n)
        {
            ret = ret + abs(pos-r) + 1;
            pos = r;
        }
        if (l!=1) ret = ret + abs(pos-l) + 1;
    }
    else
    {
        if (l>1)
        {
            ret = ret + abs(pos-l) + 1;
            pos = l;
        }
        if (r!=n) ret = ret + abs(r-pos) + 1;
    }
    cout<<ret<<endl;
    return 0;
}