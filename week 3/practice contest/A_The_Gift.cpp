#include<bits/stdc++.h>

using namespace std;

int main()
{
    int has,price,fund;
    cin>>has>>price>>fund;
    if(has+fund>=price) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    return 0;
}