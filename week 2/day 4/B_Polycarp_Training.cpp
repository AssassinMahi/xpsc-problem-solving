#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    multiset<int> ml;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        ml.insert(x);
    }
    
    int day=0,problems=1;
    while(!ml.empty())
    {
        auto it = ml.lower_bound(problems);
        if(it!=ml.end())
        {
            day++;
            ml.erase(it);
        } 
        else break;
        problems++;
    }
    cout<<day<<endl;
    return 0;
}