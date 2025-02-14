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
        vector<int> a(n);
        int ones = 0;
        long long others = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]==1) ones++;
            else others += a[i]-1;
        }
        // if(n>1 && ones<=n/2) cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;

        if(n!=1 && others>=ones) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}