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
        int firstpos = s.find('B');
        int lastpos = s.rfind('B');
        int ans = lastpos - firstpos +1;
        cout<<ans<<endl;
    }
    
    return 0;
}