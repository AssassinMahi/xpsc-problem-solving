#include<bits/stdc++.h>
using namespace std;

struct compare
{
    bool operator()(const pair<int,int> &a, const pair<int,int> &b)
    const
    {
        return a.second>b.second;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        multiset<pair<int,int>,compare> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            a.insert({i,x});
        }
        // for(auto x:a)
        // {
        //     cout<<x.first<<"-"<<x.second<<" ";
        // } 
        multiset<int> b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            b.insert(x);
        }
        stack<int> s;
        for(auto x:b)
        {
            s.push(x);
        }
        
        // auto p = a.begin();
        // auto q = b.begin();

        vector<int> real_b(n);

        // while(p != a.end())
        // {
            
        // }
        //auto it_b = b.begin();
        for(auto p:a)
        {
            real_b[p.first]=s.top();
            s.pop();
        }

        for(auto p:real_b)
        {
            cout<<p<<" ";
        }
        cout<<endl;
    }
    return 0;
}