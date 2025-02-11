#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ones,twos;
        cin>>ones>>twos;
        if(twos%2==0)
        {
            if(ones%2==0)
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;
        }
        else
        {
            //odd numbers two
            if(ones!=0 && ones%2==0)
            {
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;

        }
    }
    return 0;
}