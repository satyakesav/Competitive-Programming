#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, r; cin>>n; cin>>r;
    vector<pair<int, double>> omap;
    vector<int> arr(n,0);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout.precision(12);
    for(int i=0;i<n;i++)
    {
        double maxy = (double) r;
        int ind = -1;
        for(int j=0;j<omap.size();j++)
        {
            int x = omap[j].first;
            if (abs(x-arr[i])<=2*r)
            {
                double newy = sqrt((double) (4*r*r-(x-arr[i])*(x-arr[i]))) + omap[j].second;
                maxy = max(maxy, newy);
            }
            if (x==arr[i])
                ind = j;
        }
        if (ind==-1)
            omap.push_back({arr[i],maxy});
        else
            omap[ind] = {arr[i],maxy};
        cout<<maxy<<" ";
    }
    return 0;
}