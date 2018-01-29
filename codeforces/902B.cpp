#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, temp; cin>>n;
    vector<int> parent(n,0);
    vector<int> color(n,0);
    for(int i=1;i<n;i++)
    {
        cin>>temp; parent[i] = temp-1; 
    }
    for(int i=0;i<n;i++)
        cin>>color[i];
    vector<int> curr(n,0);
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if (curr[i]==color[i])
            continue;
        count++;
        curr[i] = color[i];
        for(int j=i+1;j<n;j++)
            curr[j] = curr[parent[j]];
    }
    cout<<count<<endl;
    return 0;
}