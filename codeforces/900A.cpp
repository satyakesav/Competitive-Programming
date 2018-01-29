#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x; cin>>n;
    int mx=0, px=0;
    for(int i=0;i<n;i++)
    {
        cin>>x; 
        if (x<0) mx++;
        else px++;
        cin>>x;
    }
    if (mx<2 || px<2) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}