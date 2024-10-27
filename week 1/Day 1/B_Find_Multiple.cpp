#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int sum=1;
    bool flag=false;
    if(c<=b)
    {
        
        for (int i = 1; sum<=b; i++)
        {
            sum=c*i;
            if(sum>=a && sum<=b)
            {
                flag=true;
                break;
            }
        }
    }
    if(flag) cout<<sum<<endl;
    else cout<<-1<<endl;
    return 0;
}