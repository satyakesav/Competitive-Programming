#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    int n; cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int mx = INT_MAX;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        for(int j=0;j<n;j++)
        {
            sum = sum + arr[(i+j)%n];
            if (sum>=180)
                break;
        }
        mx = min(mx, sum);
    }
    cout<<abs(360-2*mx)<<endl;
    return 0;
}