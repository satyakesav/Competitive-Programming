#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define lli long long int

lli searchleft(lli val, vector<lli>& arr)
{
    val--;
    lli minval=INT_MAX, ind=-1, l=0, r=arr.size()-1;
    while(l<=r)
    {
        lli mid = (r-l)/2 + l;
        if (arr[mid]>val)
        {
            r = mid-1;
            if (arr[mid]<=minval)
            {
                minval = arr[mid];
                ind = mid;
            }
        }
        else
            l = mid+1;
    }
    return ind;
}

lli searchright(lli val, vector<lli>& arr)
{
    val++;
    lli maxval=INT_MIN, ind=-1, l=0, r=arr.size()-1;
    while(l<=r)
    {
        lli mid = (r-l)/2 + l;
        if (arr[mid]<val)
        {
            l = mid+1;
            if (arr[mid]>=maxval)
            {
                maxval = arr[mid];
                ind = mid;
            }
        }
        else
            r = mid-1;
    }
    return ind;
}

int main() {
    lli n,x,k; cin>>n; cin>>x; cin>>k;
    vector<lli> arr(n,0);
    for(lli i=0;i<n;i++) cin>>arr[i];
    sort(arr.begin(), arr.end());
    lli tot=0;
    for(lli i=0;i<n;i++)
    {
        lli low = max(arr[i],x*(k+(arr[i]-1)/x)), high = x*(k+(arr[i]-1)/x) + x-1;
        lli lind = searchleft(low, arr), rind = searchright(high, arr);
        //cout<<low<<" "<<high<<endl;
        //cout<<lind<<" "<<rind<<endl;
        if (lind!=-1 && rind!=-1)
            tot += 1LL*(rind-lind+1);
    }
    cout<<tot<<endl;
    return 0;
}