#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int csk,rcb;
    cin>>csk>>rcb;
    if((csk-rcb)>=18) cout<<"RCB"<<endl;
    else cout<<"CSK"<<endl;
    return 0;
}