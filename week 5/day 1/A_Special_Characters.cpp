#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int i=0;
        if(n%2!=0)
            {
                cout<<"NO"<<'\n';
            }
        else
        {
            cout<<"YES"<<'\n';
            for (i = 0; i < n/2; i++)
            {
                cout<<char('A'+i) <<char('A'+i);

            }
        }
        if(i!=0) cout<<endl;
    }
    
    return 0;
}