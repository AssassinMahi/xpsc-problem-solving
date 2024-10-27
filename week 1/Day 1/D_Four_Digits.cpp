#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int count_zero = 4-s.size();
    for (int i = 0; i < count_zero; i++)
    {
        cout<<"0";
    }
    cout<<s;
    return 0;
}