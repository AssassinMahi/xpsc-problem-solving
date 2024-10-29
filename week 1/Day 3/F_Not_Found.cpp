#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin>>s;
    bool flag[26]={false};
    int count = 0,i=0;
    for(char ch='a';ch<='z';ch++)
    {
        flag[i]=false;
        for(char c:s)
        {
            if(c==ch)
            {
                flag[i]=true;
                count++;
                break;
            }
        }
        if(!flag[i]) 
        {
            cout<<ch<<endl;
            break;
        }
    }
    
    if(count==26) cout<<"None"<<endl;
    return 0;
}