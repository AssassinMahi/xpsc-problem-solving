#include<bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int team,min_match;
        cin>>team>>min_match;
        if((team-1)>=min_match) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}