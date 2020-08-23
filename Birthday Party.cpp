#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,m;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        cin>>n>>m;
        if(m%n==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
