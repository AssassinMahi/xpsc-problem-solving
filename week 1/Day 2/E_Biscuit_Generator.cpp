#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int biskUnitTime, biscuitUnit, time;
    cin>>biskUnitTime>>biscuitUnit>>time;
    int totalBiscuits=0;
    for (int i = biskUnitTime; biskUnitTime < time+0.5; biskUnitTime+=i)
    {
        totalBiscuits+=biscuitUnit;
    }
    cout<<totalBiscuits<<endl;
    return 0;
}