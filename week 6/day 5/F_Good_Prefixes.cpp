#include<bits\stdc++.h>
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int ans=0;
        
        if(v[0]==0) ans++;
        long long int sum=v[0];
        for (int i = 1; i < n; i++)
        {
            //int sum=0;
            sum+= v[i];
            
            for(int l=0;l<=i;l++)
            {
                if(sum==2*v[l])
                {
                    ans++;
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}