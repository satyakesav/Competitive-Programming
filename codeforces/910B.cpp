#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b; cin>>n; cin>>a; cin>>b;
    int count = 0, ca=0,cb=0;
    while(ca<4 || cb<2)
    {
        int tn = n;
        while(a+b<=tn && ca<4 && cb<2)
        {
            ca++; cb++;
            tn = tn-(a+b);
        }
        while(a<=tn && ca<4)
        {
            ca++; tn-=a;
        }
        while(b<=tn && cb<2)
        {
            cb++; tn-=b;
        }
        count++;
    }
    cout<<count<<endl;
    return 0;
}