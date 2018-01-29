#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    int n; cin>>n;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(), arr.end());
    int prev=arr[0],cnt=1;
    for(int i=1;i<arr.size();i++)
    {
        if (arr[i]==prev) cnt++;
        else
        {
            if (cnt%2==1)
            {
                cout<<"Conan"<<endl;
                return 0;
            }
            prev = arr[i];
            cnt=1;
        }
    }
    if (cnt%2==1)
        cout<<"Conan"<<endl;
    else cout<<"Agasa"<<endl;
    return 0;
}