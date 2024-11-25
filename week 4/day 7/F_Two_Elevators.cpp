#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        int first,second_from,second_to;
        cin>>first>>second_from>>second_to;
        int first_time = first - 1;
        int second_time = abs(second_to - second_from);
        second_time = second_time + second_to - 1;
        if(first_time<second_time) cout<<1<<endl;
        else if(first_time>second_time) cout<<2<<endl;
        else cout<<3<<endl;
    }
    return 0;
}
    