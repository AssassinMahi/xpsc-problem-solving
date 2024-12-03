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
        map<char,int> mp;
        char ch='a';
        string s(n,' ');
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(a[i]==0)
            {
                mp[ch]=1;
                s[i]=ch;
                ch++;
            }
            else
            {
                if(a[i]>0)
                {
                    for(auto it:mp)
                    {
                        if(it.second==a[i])
                        {
                            s[i]=it.first;
                            mp[it.first]++;
                            break;
                        }
                    }
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}