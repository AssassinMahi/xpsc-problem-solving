#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        multiset<int> ml;
        //int a[n];
        int sum=0,neg_count=0;
        for (int i = 0; i < n; i++)
        {
            //cin>>a[i];
            int x;
            cin>>x;
            ml.insert(x);
            if(x<0) neg_count++;
            // if(a[i]<0)
            // {
            //     neg_count++;
                
            // }
        }
        // if(neg_count%2==0)
        // {
        //     for (int i = 0; i < n; i++)
        //     {
        //         a[i]=-a[i];
        //         sum+=a[i];
        //     }
        // }
        // else 
        // {
        //     int neg_to_positive=neg_count-1;
        //     for (int i = 0; i < n; i++)
        //     {
        //         if(a[i]<0)
        //         {
        //             a[i]=-a[i];
        //             neg_to_positive--;
        //         }
        //         sum+=a[i];
        //         if(neg_to_positive==0) break;
        //     }
            
        // }
        if(neg_count%2==0) 
        {
            while(neg_count--)
            {
                int deleted = *ml.begin();
                ml.erase(ml.begin());
                ml.insert(-deleted);
            }
        }
        else
        {
            int neg_to_positive=neg_count-1;
            while(neg_to_positive--)
            {
                int deleted = *ml.begin();
                ml.erase(ml.begin());
                ml.insert(-deleted);
            }
        }
        for (auto value:ml)
        {
            sum+=value;
        }
        
        cout<<sum<<endl;
        
    }
    return 0;
}