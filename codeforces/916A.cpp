#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    int n,hh,mm; cin>>n; cin>>hh; cin>>mm;
    int count=0, val=hh*60+mm;
    while(1)
    {
        if (mm%10==7 || hh%10==7)
        {
            break;
        }
        val = (val-n+1440)%1440;
        mm = val%60; hh=val/60;
        count++;
    }
    cout<<count<<endl;
}