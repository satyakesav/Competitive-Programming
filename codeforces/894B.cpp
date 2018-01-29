#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define modd 1000000007

lli comp(lli a, lli b)
{
    if (b==0) return 1LL;
    lli ans = 1LL;
    if (b%2!=0)
    {
        ans = ans*(a%modd);
        b--;
    }
    lli ret = comp(a,b/2);
    return (((ret*ret)%modd)*ans)%modd;
}

int main() {
    lli m,n,val; cin>>m; cin>>n; cin>>val;
    if ((m%2+n%2)%2==1 && val==-1)
        cout<<"0";
    else
    {
        cout<<comp(comp(2LL,m-1),n-1)<<endl;
    }
}