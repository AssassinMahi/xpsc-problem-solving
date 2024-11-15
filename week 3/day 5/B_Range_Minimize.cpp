#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        //multiset<int> ml;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            // ml.insert(x);
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int r1 = v[n-1]-v[2];
        int r2 = v[n-3]-v[0];
        int r3 = v[n-2]-v[1];

        int minimum = min({r1,r2,r3});
        cout<<minimum<<endl;
    }
    return 0;
}