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
        string s;
        cin>>s;

        int cnt=0;
        for(char ch:s)
        {
            if(ch=='1') cnt++;
        }
        //cout<<cnt<<" ";
        if(cnt%4==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}