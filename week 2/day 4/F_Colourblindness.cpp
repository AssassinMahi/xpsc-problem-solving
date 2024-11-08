#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        bool flag=true;
        for (int i = 0; i < n; i++)
        {
            if(a[i]=='R')
            {
                if(b[i]=='R') continue;
                else flag=false;
            }
            else if (a[i]=='G' || a[i]=='B')
            {
                if(b[i]=='G' || b[i]=='B') continue;
                else flag=false;
            }
            
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}