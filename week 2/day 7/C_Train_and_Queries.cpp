#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        map<int,set<int>> mp;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin>>x;
            mp[x].insert(i);
        }
        while(m--)
        {
            int s,d;
            cin>>s>>d;
            if(mp.find(s)==mp.end() || mp.find(d)==mp.end())
            {
                cout<<"NO"<<endl;
            }
            else
            {
                int s_index,d_index;
                s_index=*mp[s].begin();
                d_index=*mp[d].rbegin();
                if(s_index<d_index) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}