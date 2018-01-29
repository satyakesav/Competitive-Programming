#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,n; cin>>n; cin>>a; cin>>b;
    int x,y,mx,my;
    mx = a*n/(a+b); my = n-mx;
    x = mx+1; y = my-1;
    int mxtt=0;
    if (mx!=0 && my!=0) 
    {
        int mxt = INT_MAX;
        mxt = min(mxt,a/mx);
        mxt = min(mxt,b/my);
        mxtt = max(mxt, mxtt);
    }
    if (x!=0 && y!=0) 
    {
        int mxt = INT_MAX;
        mxt = min(mxt,a/x);
        mxt = min(mxt,b/y);
        mxtt = max(mxt, mxtt);
    }
    cout<<mxtt<<endl;
    return 0;
}