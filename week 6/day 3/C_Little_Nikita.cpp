#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;cin>>t;
    while(t--)
    {
        int step,final;
        cin>>step>>final;
        if(step>final)
        {
            if((step-final)%2==0)
            {
                cout<<"Yes"<<endl;
            }
            else cout<<"No"<<endl;
        }
        else if (step==final)
        {
            cout<<"Yes"<<endl;
        }
        
        else cout<<"No"<<endl;
    }
    return 0;
}