#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> nums = {31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,29,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31,31,28,31,30,31,30,31,31,30,31,30,31};

int main() {
    int n; cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=0;i<=nums.size()-n;i++)
    {
        int j=0;
        for(j=0;j<n;j++)
        {
            if (nums[i+j]!=arr[j])
                break;
        }
        if (j==n)
        {
            cout<<"Yes"<<endl; return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}