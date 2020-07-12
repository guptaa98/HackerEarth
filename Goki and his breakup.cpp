#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,x,y;
    cin>>n;
    cin>>x;
    int i;
    for(i=1;i<=n;i++)
    {
        cin>>y;
        if(y>=x)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
