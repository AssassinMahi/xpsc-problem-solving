#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,lang;
        cin>>n>>k>>lang;
        priority_queue<pair<int,int>> pq;
        int l_song=0;
        while(n--)
        {
            int m,l;
            cin>>m>>l;
            if(l==lang) l_song++;
            pq.push({m,l});
        }
        int max_min=0;
        if(l_song>=k)           // shobgula same lang song jabe 
        {
            while(!pq.empty())
            {
                auto p=pq.top();
                if(p.second==lang) 
                {
                    max_min += p.first;
                    k--;
                }
                pq.pop();
                if(k==0) 
                {
                    cout<<max_min<<endl;
                    break;
                }
            }
        }
        else
        {
            cout<<-1<<endl;
        }
        
    }
    return 0;
}