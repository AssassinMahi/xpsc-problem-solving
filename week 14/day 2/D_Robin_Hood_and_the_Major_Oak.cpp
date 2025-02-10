#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int target,lasting;
        cin>>target>>lasting;
        
        //int daily_leaf = target;
        int first = target - lasting + 1;
        long long total = (first+target)*lasting/2;
        // for (int i = 0; i < lasting; i++)
        // {
        //     total += pow(daily_leaf,daily_leaf);
        //     daily_leaf--;
        // }
        //cout<<total<<endl;
        if(total%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}