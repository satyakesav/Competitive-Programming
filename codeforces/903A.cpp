#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, val, flag; cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        flag = 0;
        for(int j=0;j<=val;j=j+7)
        {
            if ((val-j)%3==0)
            {
                flag = 1; break;
            }
        }
        if (flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}