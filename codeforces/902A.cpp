#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m, a1,a2; cin>>n; cin>>m;
    int curr = 0, flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>a1; cin>>a2;
        if (a1<=curr)
            curr = max(curr, a2);
        else break;
        if (curr>=m)
        {
            flag = 1;
            break;
        }
    }
    if (flag==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}