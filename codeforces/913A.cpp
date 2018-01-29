#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m; cin>>n; cin>>m;
    if (n>31) cout<<m<<endl;
    else cout<<(m%(1<<n))<<endl;
    return 0;
}