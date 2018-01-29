#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int gcd(int a, int b)
{
    if (a==0) return b;
    return gcd(b%a,a);
}

int main() {
    int n; cin>>n;
    vector<int> arr(n,0); 
    unordered_map<int,int> umap;
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
        umap[arr[i]]=1;
    }
    for(int i=1;i<n;i++)
    {
        int val = gcd(arr[0],arr[i]);
        if (umap.find(val)==umap.end())
        {
            cout<<"-1"<<endl; return 0;
        }
    }
    vector<int> ans; ans.push_back(arr[0]);
    for(int i=1;i<n;i++)
    {
        int val = gcd(arr[i],arr[i-1]);
        ans.push_back(arr[0]);
        ans.push_back(arr[i]);
    }
    cout<<ans.size()<<endl;
    for(auto ele:ans)
        cout<<ele<<" ";
    cout<<endl;
}