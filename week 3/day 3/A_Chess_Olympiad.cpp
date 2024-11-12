#include<bits/stdc++.h>

using namespace std;

int main()
{
    int win,draw,loss;
    cin>>win>>draw>>loss;
    float p1,p2;
    int remain = 4-win-draw-loss;
    
    p1=win+0.5*draw+remain;
    p2=loss+0.5*draw;
    if(p1>p2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}