#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    if (n%2==0)
    {
        if (n%4==0) cout<<"0"<<endl;
        else cout<<"1"<<endl;
        cout<<(n/2);
        for(int i=1;i<n/2;i=i+2)
            cout<<" "<<i<<" "<<(n-i+1);
        if (n%4!=0) cout<<" "<<n/2<<endl;
    }
    else
    {
        if ((n+1)%4==0) cout<<"0"<<endl;
        else cout<<"1"<<endl;
        cout<<(n/2+1);
        for(int i=1;i<=n/2;i++)
        {
            if (i%2==1) cout<<" "<<i;
            else cout<<" "<<(n-i+1);
        }
        cout<<" "<<(n/2+1)<<endl;
    }
    return 0;
}