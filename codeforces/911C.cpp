#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> arr(3,0);
    for(auto &n:arr) cin>>n;
    sort(arr.begin(), arr.end());
    if (arr[0]==1 || (arr[0]==2 && arr[1]==2) || (arr[0]==3 && arr[1]==3 && arr[2]==3)) cout<<"YES"<<endl;
    else if (arr[0]==2 && arr[1]==4 && arr[2]==4) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}