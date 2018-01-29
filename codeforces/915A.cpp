#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,mn=INT_MAX; cin>>n; cin>>k;
    for(int i=0;i<n;i++)
    {
        int temp; cin>> temp;
        if (k%temp==0)
            mn = min(k/temp, mn);
    }
    cout<<mn<<endl;
    return 0;
}