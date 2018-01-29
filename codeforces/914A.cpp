#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    int n; cin>>n;
    int mx = INT_MIN;
    for(int i=0;i<n;i++)
    {
        int temp; cin>>temp;
        if (temp>mx && temp>0 && (((int) sqrt(temp))*((int) sqrt(temp)))!=temp)
            mx = temp;
        if (temp<0)
            mx = max(mx,temp);
    }
    cout<<mx<<endl;
}