#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a = "Timur";
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag[n] = {false};
        if(s.size()==5)
        {
            for (int i = 0; i < 5; i++)
            {
                for(char ch:a)
                {
                    if(ch==s[i]) flag[i]=true;
                }
            }
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if(flag[i]==true) count++;
        }
        if(count==5) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}