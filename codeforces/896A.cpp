#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define lli long long int
string s0 = "What are you doing at the end of the world? Are you busy? Will you save us?";
string s1 = "What are you doing while sending |", s2 = "|? Are you busy? Will you send |", s3 = "|?";
lli l0 = s0.length(), l1 = s1.length(), l2 = s2.length(), l3 = s3.length();

string test = "What are you doing while sending |What are you doing at the end of the world? Are you busy? Will you save us?|? Are you busy? Will you send |What are you doing at the end of the world? Are you busy? Will you save us?|?";

char find(lli n, lli k, vector<lli>& len)
{
    if (n==0LL)
        return s0[k];
    if (k<l1)
        return s1[k];
    else if (k<l1+len[n-1])
        return find(n-1, k-l1, len);
    else if (k<l1+len[n-1]+l2)
        return s2[k-l1-len[n-1]];
    else if (k<l1+2*len[n-1]+l2)
        return find(n-1, k-l1-l2-len[n-1], len);
    else
        return s3[k-l1-2*len[n-1]-l2];
}

int main() {
    int t; cin>>t;
    vector<pair<lli,lli>> arr;
    lli a,b,mx=INT_MIN;
    for(int i=0;i<t;i++)
    {
        cin>>a; cin>>b;
        arr.push_back({a,b});
        mx = max(mx, a);
    }
    vector<lli> len(mx+1,0);
    len[0] = l0;
    for(int i=1;i<mx+1;i++)
    {
        if (len[i-1]>1000000000000000000)
            len[i] = len[i-1];
        else
            len[i] = 2*len[i-1]+l1+l2+l3;
    }
    for(int i=0;i<t;i++)
    {
        if (arr[i].second>len[arr[i].first])
        {
            cout<<"."; continue;
        }
        char ch = find(arr[i].first, arr[i].second-1, len);
        if (ch=='|') cout<<"\"";
        else cout<<ch;
    }
    return 0;
}