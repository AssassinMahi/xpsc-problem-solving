#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int count=0,i=0;
    for(char ch1:s)
    {
        if(ch1==t[i]) 
        {
            i++;
            continue;
        }
        else
        {
            count++;
            i++;
        }
    }
    cout<<count<<endl;
    return 0;
}