#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int y,b; cin>>y;cin>>b;
    long long int a1,a2,a3; cin>>a1; cin>>a2; cin>>a3;
    cout<<(max(2*a1+a2-y,0LL)+max(a2+3*a3-b,0LL))<<endl;
    return 0;
}