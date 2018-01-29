#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int main() {
    lli k,p,sum=0; cin>>k; cin>>p;
    vector<lli> arr = {11,22,33,44,55,66,77,88,99};
    for(int i=0;i<min(9LL,k);i++)
        sum+=arr[i];
    if (k<=9)
    {
        cout<<sum%p; return 0;
    }
    queue<lli> q;
    for(int i=11;i<=99;i=i+11)
        q.push(i);
    lli curr=0, m1,m2,val;
    char ch = '9';
    string s;
    for(int i=0;i<k-9;i++)
    {
        if (ch=='9')
        {
            curr = q.front(); q.pop();
            ch = '0';
            s = to_string(curr); 
            s.insert(s.length()/2,2,'0');
            m1 = s.length()/2-1; m2 = s.length()/2;
        }
        else
            ch = ch+1;
        s[m1]=ch; s[m2]=ch;
        val = stoll(s);
        q.push(val);
        sum = (sum + val)%p;
    }
    cout<<sum<<endl;
    return 0;
}