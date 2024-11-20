#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() 
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin>>q;
    while(q--)
    {
        ll a,b,n,s;
        cin>>a>>b>>n>>s;
        ll x = s / n;
        ll y = s % n;
        if(y<=b && a*n+b>=s) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}