#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define lli long long int

bool pref(string a, string b)
{
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int siz = min(a.length(), b.length());
    if (a.substr(0,siz)==b.substr(0,siz)) return true;
    else return false;
}

bool cmp(string a, string b)
{
    return a.length()<b.length();
}

int main() {
    int n; cin>>n;
    unordered_map<string, unordered_set<string>> umap;
    for(int i=0;i<n;i++)
    {
        string s,temp; cin>>s;
        int t; cin>>t;
        for(int j=0;j<t;j++)
        {
            cin>>temp;
            umap[s].insert(temp);
        }
    }
    cout<<umap.size()<<endl;
    for(auto it=umap.begin();it!=umap.end();it++)
    {
        string s = (*it).first;
        unordered_set<string> us = (*it).second;
        vector<string> arr;
        for(auto it1=us.begin();it1!=us.end();it1++)
            arr.push_back((*it1));
        sort(arr.begin(), arr.end(), cmp);
        unordered_set<string> uset;
        cout<<s<<" ";
        for(int i=0;i<arr.size();i++)
        {
            int flag = 0;
            for(int j=i+1;j<arr.size();j++)
            {
                if (pref(arr[i],arr[j]))
                {
                    flag = 1;
                    if (min(arr[i].length(),arr[j].length())==arr[i].length())
                    {
                        if (uset.find(arr[i])!=uset.end()) uset.erase(arr[i]);
                        uset.insert(arr[j]);
                    }
                    else
                    {
                        if (uset.find(arr[j])!=uset.end()) uset.erase(arr[i]);
                        uset.insert(arr[i]);
                    }
                }
            }
            if (flag==0) uset.insert(arr[i]);
        }
        cout<<uset.size();
        for(auto it1=uset.begin();it1!=uset.end();it1++)
            cout<<" "<<(*it1);
        cout<<endl;
    }
    return 0;
}