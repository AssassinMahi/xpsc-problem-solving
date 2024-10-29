#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    long long int total_sum = 0;
    int min_odd=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]%2!=0)
        {
            min_odd = min(min_odd,a[i]);
        }
        total_sum = total_sum + a[i];
    }
    if(total_sum%2==0) cout<<total_sum<<endl;
    if(total_sum%2!=0) cout<<total_sum-min_odd<<endl;
    return 0;
}