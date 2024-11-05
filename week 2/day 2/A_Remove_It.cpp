#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
        if(y==x) v.pop_back();
    }
    if(v.empty()) cout<<endl;
    else
    {
        for(int z:v)
        {
            if(z==0) continue;
            cout<<z<<" ";
        }
        
    }
    
    return 0;
}