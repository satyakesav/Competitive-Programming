#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int SieveOfEratosthenes(int n)
{
    int mx = min(100*n,1000000);
    vector<bool> prime(mx+1,true);
    prime[1]=false;
    int p=2;
    while(1)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=mx; i += p)
                prime[i] = false;
            if (p>n) break;
        }
        p++;
    }
    return p;
}

int main() {
    int m,n; cin>>n; cin>>m;
    if (n==1) return 0;
    int p = SieveOfEratosthenes(n-1);
    int nvals = p%(n-1);
    unordered_map<int,unordered_map<int,int>> umap;
    int s=1;
    cout<<p<<" "<<p<<endl;
    for(int i=0;i<n-1;i++)
    {
        int val = p/(n-1);
        umap[s][s+1] = 1;
        if (i<nvals) val++;
        cout<<s<<" "<<(s+1)<<" "<<val<<endl;
        s++;
    }
    int left=1, right=2;
    m = m-(n-1);
    while(m)
    {
        if (umap[left].find(right) == umap[left].end() && left<right)
        {
            cout<<left<<" "<<right<<" "<<p+1<<endl;
            m--;
            umap[left][right]=1;
        }
        right++;
        if (right>n)
        {
            left++; right=1;
        }
    }
}