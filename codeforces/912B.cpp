#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n,k; cin>>n; cin>>k;
    long long int lval = (int) log2l(n);
    long long int ans = max(1LL*(long long int) pow(2.0,lval),n);
    if (k!=1)
        ans = pow(2.0,lval+1)-1;
    cout<<ans<<endl;
    return 0;
}