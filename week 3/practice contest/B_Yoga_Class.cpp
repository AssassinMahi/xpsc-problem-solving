#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int hr,h1_pay,h2_pay;
        cin>>hr>>h1_pay>>h2_pay;

        //2 hr e , kunta beshi
        if(h1_pay*2>=h2_pay) cout<<h1_pay*hr<<'\n';
        else
        {
            if(hr%2==0)     // jor hr, so h2 rate ei shob hr
            {
                cout<< h2_pay*hr/2 <<'\n';
            }
            else
            {
                int payment;
                payment = h2_pay*(hr/2);
                payment+= h1_pay*(hr%2);
                cout<<payment<<'\n';
            }
        }
    }
    return 0;
}