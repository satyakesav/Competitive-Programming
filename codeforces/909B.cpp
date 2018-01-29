#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
    int val = (n+1)/2, tot = (n*(n+1))/2;
    int ans = val + (tot-val)/2;
    cout<<ans;
    return 0;
}