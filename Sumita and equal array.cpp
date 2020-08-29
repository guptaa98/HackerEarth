#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,y,z,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y>>z;
        vector<long int>a;
        long int num;
        for(i=0;i<n;i++)
        {
            cin>>num;
            a.push_back(num);
        }
        for(i=0;i<n;i++)
        {
            while(a[i]%x==0)
            {
                a[i]/=x;
            }
            while(a[i]%y==0)
            {
                a[i]/=y;
            }
            while(a[i]%z==0)
            {
                a[i]/=z;
            }
            if(a[i]!=a[0])
            {
                cout<<"She can't"<<endl;
                break;
            }
        }
        if(i==n)
        {
        cout<<"She can"<<endl;
        }
    }
}
