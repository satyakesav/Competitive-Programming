#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, os=0, ts=0, temp; cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        if (temp==1) os++;
        else ts++;
    }
    int tot = min(os,ts);
    os = os-tot;
    tot = tot + os/3;
    cout<<tot<<endl;
    return 0;
}