#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin>>n;
    vector<int> arr(n+1,0);
    for(int i=0;i<n+1;i++) cin>>arr[i];
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        if (arr[i]>1 && arr[i+1]>1)
        {
            flag = 1;
            break;
        }
    }
    if (flag==0)
    {
        cout<<"perfect"<<endl; return 0;
    }
    vector<int> ans1,ans2; ans1.push_back(0); ans2.push_back(0);
    flag = 0;
    for(int i=1;i<n+1;i++)
    {
        int val = ans1.size();
        if (arr[i]>1 && arr[i-1]>1 && flag==0)
        {
            ans1.push_back(val);
            ans2.push_back(val-1);
            for(int j=0;j<arr[i]-1;j++)
            {
                ans1.push_back(val-1);
                ans2.push_back(val-1);
            }
            flag = 1;
        }
        else
        {
            for(int j=0;j<arr[i];j++)
            {
                ans1.push_back(val);
                ans2.push_back(val);
            }
        }
    }
    cout<<"ambiguous"<<endl;
    for(int i=0;i<ans1.size();i++)
        cout<<ans1[i]<<" ";
    cout<<endl;
    for(int i=0;i<ans2.size();i++)
        cout<<ans2[i]<<" ";
    cout<<endl;
    return 0;
}