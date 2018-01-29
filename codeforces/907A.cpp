#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int f,m,s,ms; cin>>f; cin>>m; cin>>s; cin>>ms;
    int fc = 2*f, mc, sc;
    mc = 2*m;
    if (s>2*ms || ms>2*s || ms>m || 2*ms>=fc || 2*ms>=mc)
        cout<<"-1"<<endl;
    else
        cout<<fc<<" "<<mc<<" "<<max(s,ms)<<endl;
    return 0;
}