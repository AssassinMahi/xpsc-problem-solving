#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        dq.push_back(x);
    }
    int s=0,d=0;
    for (int i = 1; i <= n; i++)
    {
        int left = dq.front();
        int right = dq.back();
        int mx = max(left,right);
        if(i%2!=0) 
        {
            s+=mx;
        }
        else d+=mx;
        if(mx==left) dq.pop_front();
        else dq.pop_back();
    }
    cout<<s<<" "<<d<<endl;
    return 0;
}