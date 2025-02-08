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
        int mat[n][n];

        map<int,int> dia;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>mat[i][j];
            }
        }
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout<<mat[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(mat[i][j]<0) 
                {
                    dia[i-j] = max(dia[i-j],abs(mat[i][j]));
                }
            }
        }
        int result = 0;
        for (auto mp:dia)
        {
            result += mp.second;
        }
        cout<<result<<endl;
    }
    return 0;
}