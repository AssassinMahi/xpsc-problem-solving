#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int h,attack,signature;
        cin>>h>>attack>>signature;
        h -= signature;
        int step = 1;
        while(h>0)
        {
            h -= attack;
            step++;
        }
        cout<<step<<endl;
    }
    return 0;
}