#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt0 = 0,cnt1 = 0;
        for(char ch:s)
        {
            if(ch=='0') cnt0++;
            else cnt1++;
        }
        int mn = min(cnt0,cnt1);
        if(mn%2==0) cout<<"NET"<<endl;
        else cout<<"DA"<<endl;
    }
    return 0;
}