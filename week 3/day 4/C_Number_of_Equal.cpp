#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n),b(m);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    long long int ans = 0;
    int l=0,r=0;
    while(l<n && r<m)
    {
        int curr=a[l],cnt1=0,cnt2=0;
        while(a[l]==curr)
        {
            l++;
            cnt1++;
        }
        while(curr>b[r])
        {
            r++;
        }
        while(b[r]==curr)
        {
            cnt2++;
            r++;
        }
        ans += (1LL * cnt1*cnt2);
    }
    cout<<ans<<endl;
    return 0;
}