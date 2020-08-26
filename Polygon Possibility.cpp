#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,num;
    int sum=0;
    int g=0;
    vector<int>l;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>num;
            if(num>g)
            {
                g=num;
            }
            l.push_back(num);
        }
        for(i=0;i<n;i++)
        {
            if(l[i]!=g)
            {
                sum+=l[i];
            }
        }
        if(g<sum)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        sum=0;
        g=0;
        l.clear();
    }
}
