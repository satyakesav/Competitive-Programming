#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n, l; cin>>n; cin>>l;
    vector<long long int> arr(n,0);
    for(auto &ele:arr) cin>>ele;
    for(int i=1;i<arr.size();i++)
    {
        if (arr[i] > 2*arr[i-1])
            arr[i] = 2*arr[i-1];
    }
    long long int sum=0,curr=0,ans=LLONG_MAX;
    for(int i=n-1;i>=0;i--)
    {
        int val = l/(1<<i);
        sum = sum + val*arr[i];
        l = l%(1<<i);
        if (l>0)
            ans = min(ans, sum+arr[i]);
        else
            ans = min(ans, sum);
    }
    cout<<ans<<endl;
    return 0;
}