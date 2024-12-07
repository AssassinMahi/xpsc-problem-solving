
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        int index = -1;
        bool first = false;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(!first && a[i]!=0)
            {
                index = i;
                first = true;
            }
        }
        long long int step = 0;
        // if(a[n-2]!=0)
        // {
        //     while(a[n-2]!=1)
        //     {
        //         a[n-2]--;
        //         a[n-1]++;
        //         step++;
        //     }
        // }
        for (int i = 0; i < n-1; i++)
        {
            if(i>0 && a[i]==0 && a[i-1]>0)
            {
                a[i-1]--;
                a[i]++;
                step++;
            }
        }
        for (int i = 0; i < n-1; i++)
        {
            step += a[i];
        }
        cout<<step<<endl;
    }
    
    return 0;
}

