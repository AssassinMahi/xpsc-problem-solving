#include<bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int index = -1;
        bool flag = true;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        for (int i = 0; i < n; i++)
        {
            if(v[i]>v[i+1])
            {
                index = i+1;
                break;
            }
        }
        int k =0;
        for (int i = index; i < n; i++)
        {
            if(v[i]>v[k])
            {
                flag=false;
            }
        }
        if(flag) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        
    }
    
    return 0;
}