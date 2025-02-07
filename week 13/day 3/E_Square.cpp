#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,b1,a2,b2;
        cin>>a1>>b1>>a2>>b2;
        if(a1==a2)
        {
            int sum = b1+b2;
            if(sum==a1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if (a1==b2)
        {
            int sum = a2+b1;
            if(sum==a1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if (b1==b2)
        {
            int sum = a1+a2;
            if(sum==b1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if (b1==a2)
        {
            int sum = a1+b2;
            if(sum==a2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;
}