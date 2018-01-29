#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
    vector<int> arr(n+1,0);
    for(int i=2;i<=n;i++) cin>>arr[i];
    vector<int> cnt(n+1,0);
    for(auto &an:arr) cnt[an]++;
    vector<int> cnt1(n+1,0);
    for(int i=1;i<=n;i++)
    {
        if (cnt[i]==0) cnt1[arr[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
        if (cnt[i]>0 && cnt1[i]<3)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}