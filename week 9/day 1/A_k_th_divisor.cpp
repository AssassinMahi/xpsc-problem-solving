#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    int k;
    cin>>n>>k;
    vector<long long> divisors;
    for (long long i = 1; i*i <= n; i++)
    {
        if(n%i==0)
        {
            divisors.push_back(i);
            if(n/i==i) continue;
            divisors.push_back((n/i));
        }
    }
    sort(divisors.begin(),divisors.end());
    if(k>divisors.size()) cout<<-1<<endl;
    else cout<<divisors[k-1]<<endl;
    return 0;
}