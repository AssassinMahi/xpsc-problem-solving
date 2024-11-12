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
        int a[n];
        int count=0,not_count=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]<=0)
            {
                not_count++;
            }
             
        }
        if(not_count==n) cout<<0<<endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if(a[i]<0) 
                {
                    a[i]=0;
                    count++;
                }
            }
        } 
        if(not_count!=n) cout<<count<<endl;
        
        
    }
    return 0;
}