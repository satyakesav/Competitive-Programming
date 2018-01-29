#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> perm;
void generate(vector<int>& curr, int n)
{
    if (n==4)
        perm.push_back(curr);
    else
    {
        for(int i=n;i<4;i++)
        {
            swap(curr[n],curr[i]);
            generate(curr, n+1);
            swap(curr[n],curr[i]);
        }
    }
}

bool yes(vector<string>& s, int i, int j, string& dir, int ind, vector<int>& num)
{
    int m = s.size(), n=s[0].length();
    if (i<0 || j<0 || i>=m || j>=n) return false;
    if (s[i][j]=='E') return true;
    if (s[i][j]=='#') return false;
    if (ind==dir.length()) return false;
    int val = dir[ind]-'0';
    if (num[val]==0) return yes(s, i+1, j, dir, ind+1, num);
    if (num[val]==1) return yes(s, i, j-1, dir, ind+1, num);
    if (num[val]==2) return yes(s, i-1, j, dir, ind+1, num);
    if (num[val]==3) return yes(s, i, j+1, dir, ind+1, num);
    return false;
}

int main() {
	vector<int> curr = {0,1,2,3};
    generate(curr, 0);
    int m,n; cin>>m; cin>>n;
    vector<string> s(m, "");
    for(int i=0;i<m;i++) cin>>s[i];
    string dir; cin>>dir;
    int count=0, xi, xj;
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            if (s[i][j]=='S')
            {
                xi = i; xj = j; break;
            }
    for(int i=0;i<24;i++)
    {
        if (yes(s,xi,xj,dir,0,perm[i])) count++;
    }
    cout<<count<<endl;
    return 0;
}