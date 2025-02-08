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
        int i = 1;
        int pos = 0;
        bool saku = true;
        while(abs(pos)<=n)
        {
            if(i%2!=0)
            {
                //odd
                pos += -(2*i-1);
                saku = true;
            }
            else
            {
                //even
                pos += 2*i-1;
                saku = false;
            }
            i++;
        }
        if(saku) cout<<"Sakurako"<<endl;
        else cout<<"Kosuke"<<endl;
    }
    return 0;
}