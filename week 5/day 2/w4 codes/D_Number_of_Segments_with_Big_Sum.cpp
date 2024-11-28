#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long k;
    cin>>n>>k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    long long int l=0,r=0;
    long long int sum=0,ans=0;
    bool visit = false;
    while(r<n)
    {
        sum+=a[r];
        if(!visit && sum>=k)
        {
        ans += n-r;
        visit = true;
        }
        // else
        // {
        //     // while(sum>k && l<=r)
        //     // {
        //     //     sum-=a[l];
        //     //     l++;
        //     // }
        //     // if(sum<=k)
        //     // {
        //     //     ans+=(r-l+1);
        //     // }
            
        // }
        while(visit) 
            {
                sum-=a[l];
                l++;
                if(sum>=k) ans+= n-r;
                else
                {
                    visit = false;
                }
            }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}