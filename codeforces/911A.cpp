#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, mn=INT_MAX; cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i]; mn = min(mn, arr[i]);
    }
    long long int prev = INT_MIN, mnind=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if (mn==arr[i])
        {
            mnind = min(mnind, i-prev);
            prev = i;
        }
    }
    cout<<mnind<<endl;
    return 0;
}