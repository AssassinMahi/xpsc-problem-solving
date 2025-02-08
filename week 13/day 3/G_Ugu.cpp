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
        int ops = 0;
        int flip = 0;
        bool one_start = false;
        for (int i = 0; i < n; i++)
        {
            int temp = s[i]-'0';
            int eff = temp^flip;

            if(eff==1)
            {
                one_start=true;
            }
            else
            {
                if(one_start)
                {
                    ops++;
                    flip = 1-flip;
                }
            }
        }
        cout<<ops<<endl;
    }
    return 0;
}
