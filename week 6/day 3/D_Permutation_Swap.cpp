#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans = __gcd(ans,abs(v[i]-(i+1)));
        }
        int result = n / __gcd(n, ans);
        cout<<result<<endl;
    }
    return 0;
}