#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a==0)
        return b;
    else
        return gcd(b%a, a);
}

int main() {
    int a,b,f; cin>>a; cin>>b; cin>>f;
    int g = gcd(a,b);
    a = a/g; b = b/g;
    int rem = (a%b)*10;
    int count = 0,q, flag=0;
    unordered_map<int,int> umap;
    while(rem!=0)
    {
        if (umap.find(rem)!=umap.end())
            break;
        else umap[rem] = 1;
        count++;
        q = rem/b;
        if (q==f)
        {
            flag = 1;
            break;
        }
        else
            rem = 10*(rem-q*b);
    }
    if (f==0 && rem==0) cout<<count+1<<endl;
    else if (flag==0) cout<<"-1"<<endl;
    else cout<<count<<endl;
    return 0;
}