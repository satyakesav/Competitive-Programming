#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<string> arr(n,"");
    for(auto &ele:arr) cin>>ele;
    vector<int> flag(10,0);
    for(int i=0;i<n;i++)
        flag[arr[i][0]-'a'] = 1;
    vector<pair<int,int>> cnt(10,{0,-1});
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<arr[i].length();j++)
            cnt[arr[i][j]-'a'].first += (int) pow(10.0, arr[i].length()-1-j);
    }
    for(int i=0;i<10;i++) cnt[i].second = i;
    sort(cnt.begin(), cnt.end());
    vector<int> final(10,-1); int start = 1, flag0=0;
    for(int i=9;i>=0;i--)
    {
        if (flag[cnt[i].second]!=1 && flag0==0)
        {
            final[cnt[i].second] = 0; flag0 = 1;
        }
        else final[cnt[i].second]=start++;
    }
    int sum = 0;
    for(int i=0;i<10;i++)
        sum += cnt[i].first * final[cnt[i].second];
    cout<<sum<<endl;
    return 0;
}