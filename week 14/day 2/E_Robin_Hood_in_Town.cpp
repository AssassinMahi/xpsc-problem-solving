#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        long long total = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            total += a[i];
        }
        
        int avg = total/n;
        int poor = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]<avg) poor++;
        }
        if(poor>n/2) cout<<-1<<endl;
        else
        {
            int ans = (n/2+1)-poor;
            cout<<5*ans<<endl;
        }
    }
    
    return 0;
}