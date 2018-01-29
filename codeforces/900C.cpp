#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    vector<int> arr(n,0), rad(n,0), r(n,0);
    int tmx=INT_MIN;
    for(int i=0;i<n;i++) 
    {
        cin>>arr[i];
        if (arr[i]>tmx) r[arr[i]-1] = 1;
        tmx = max(tmx, arr[i]);
    }
    int max1=INT_MIN+1, max2=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if (arr[i]<max1 && arr[i]>max2)
            rad[max1-1]++;
        if (arr[i]>max1)
        {
            max2 = max1; max1 = arr[i];
        }
        else if (arr[i]>max2)
            max2 = arr[i];
    }
    int mx = INT_MIN;
    for(int i=0;i<n;i++)
        mx = max(mx, rad[i]-r[i]);
    for(int i=0;i<n;i++)
        if ((rad[i]-r[i])==mx)
        {
            cout<<i+1<<endl;
            break;
        }
    return 0;
}