#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int sum;
    if(a>=b)
    {
        sum=a;
        a=a-1;
        sum=sum+max(a,b);
        
    }
    else
    {
        sum=b;
        b=b-1;
        sum=sum+max(a,b);
    }
    cout<<sum<<endl;
    return 0;
}