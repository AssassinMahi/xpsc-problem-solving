#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        a = a%3;
        b=b%3;
        if(a==b) cout<<a<<endl;
    }
    return 0;
}