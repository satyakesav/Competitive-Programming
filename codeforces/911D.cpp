#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
    vector<int> arr(n,0);
    for(auto &an:arr) cin>>an;
    long long int curr = 0;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if (arr[j]<arr[i]) curr++;
    int q; cin>>q;
    for(int i=0;i<q;i++)
    {
        long long int l,r,val; cin>>l; cin>>r;
        val = (r-l)*(r-l+1)/2;
        curr = (curr+val)%2;
        if (curr==0) cout<<"even"<<endl;
        else cout<<"odd"<<endl;
    }
    return 0;
}