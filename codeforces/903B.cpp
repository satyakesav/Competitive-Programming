#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int h1,a1,c1,h2,a2; cin>>h1; cin>>a1; cin>>c1; cin>>h2; cin>>a2;
    vector<int> ans;
    while(h2>0)
    {
        if (h1<=a2 && h2>a1)
        {
            h1 += c1;
            ans.push_back(0);
        }
        else
        {
            h2 -= a1;
            ans.push_back(1);
        }
        h1 -= a2;
    }
    cout<<ans.size()<<endl;
    for(auto ele:ans)
    {
        if (ele==0) cout<<"HEAL"<<endl;
        else cout<<"STRIKE"<<endl;
    }
    return 0;
}