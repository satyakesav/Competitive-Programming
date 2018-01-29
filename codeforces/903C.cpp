#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr.begin(), arr.end());
    int mx=1, cnt=1;
    for(int i=1;i<n;i++)
    {
        if (arr[i]==arr[i-1])
            cnt++;
        else
            cnt=1;
        mx = max(mx, cnt);
    }
    cout<<mx<<endl;
    return 0;
}