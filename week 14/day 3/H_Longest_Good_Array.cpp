#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        int diff = 0;
        int count = 0;
        for (int i = l; i <= r; i=i+diff)
        {
            count++;
            diff++;
        }
        cout<<count<<endl;
    }
    return 0;
}