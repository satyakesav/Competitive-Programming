#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<vector<string>> s(9, vector<string>(3,""));
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            for(int k=0;k<3;k++)
                cin>>s[3*i+j][k];
    }
    int x,y; cin>>x; cin>>y;
    x = 3*((x-1)%3); y = (y-1)%3;
    int flag = 0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            if (s[i+x][y][j]=='.')
                flag = 1;
    }
    if (flag==1)
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                if (s[i+x][y][j]=='.')
                    s[i+x][y][j] = '!';
        }
    }
    else
    {
        for(int i=0;i<9;i++)
            for(int j=0;j<3;j++)
                for(int k=0;k<3;k++)
                    if (s[i][j][k]=='.')
                        s[i][j][k] = '!';
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
                cout<<s[3*i+j][k]<<" ";
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}