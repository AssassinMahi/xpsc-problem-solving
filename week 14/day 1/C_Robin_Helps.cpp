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
        int n,cap;
        cin>>n>>cap;
        int arr[n];
        
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        //int cnt0 = 0;
        int balance = 0;
        int donation = 0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]>=cap) balance += arr[i];
            else if(balance>0 && arr[i]==0)
            {
                balance--;
                donation++;
            }
            
        }

        cout<<donation<<endl;
    }
    return 0;
}