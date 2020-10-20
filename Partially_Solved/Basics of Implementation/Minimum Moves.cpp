#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        long int x,y,xt,yt,m;
        cin>>x>>y;
        xt=yt=0;
        m=0;
        while(xt!=x || yt!=y)
        {
            if(xt!=x)
            {
                xt++;
            }
            if(yt!=y)
            {
                yt++;
            }
            m++;
        }
        cout<<m;
    }
}
