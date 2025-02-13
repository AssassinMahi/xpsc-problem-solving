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
        int total = 0;
        if(n>=4)
        {
            int cow = n/4;
            if(n%4!=0)
            {
                cout<<cow+1<<endl;
            }
            else cout<<cow<<endl;
        }
        else cout<<1<<endl;
    }
    return 0;
}