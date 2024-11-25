#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int limit,remaining,tools;
        cin>>limit>>remaining>>tools;
        vector<int> a(tools);
        for (int i = 0; i < tools; i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int i=0,count=0;
        // while(remaining!=-1)
        // {
        //     while(i<tools && remaining+a[i]<=limit)
        //     {
              
        //         remaining=remaining+a[i];
        //         i++;    
        //     }
        //     if (remaining==0 && i<tools)
        //     {
        //         remaining=limit;
        //         i++;
        //     }
        //     remaining--;
        //     if(remaining==-1) break;
        //     count++;
        // }
        // while(remaining>=0)
        // {
        //     if(i<tools && remaining+a[i]<=limit)
        //     {
        //         remaining+=a[i];
        //         i++;
        //     }
        //     else if (remaining==0 && i<tools)
        //     {
        //         remaining=limit;
        //         i++;
        //     }
        //     remaining--;
        //     if(remaining!=0) count++;
        // }
        while(i<tools)
        {
            if(remaining+a[i]<=limit)
            {
                remaining+=a[i];
                i++;
            }
            else if (remaining==0)
            {
                remaining=limit;
                i++;
            }
            else
            {
                count=count+remaining;
                remaining=0;
            }
            
            if(remaining!=0) 
            {
                count++;
                remaining--;
            }

        }
        cout<<count<<endl;
    }
    
    return 0;
}