#include<bits/stdc++.h>
using namespace std;
int main()
{
    int flag,j,i,t,n,x,y,s;
    cin>>t;
    s=0;
    flag=0;
    for(i=0;i<t;i++)
    {
        cin>>x>>y;
        for(j=x;j<=y;j++)
        {
            for (int k=1;k<=j;k++)
            {
                if(j%k==0)
                {
                    flag++;
                }
            }
            if(flag>2)
            {
                cout<<j<<endl;
                s++;
            }
            flag=0;
        }
        cout<<s<<endl;
        s=0;
    }
}
