#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    int j,T,n,i,c;
    cin>>T;
    c=0;
    for(j=0;j<T;j++)
    {
    	cin>>n;
        cin>>s;
        cin>>t;
        for(i=0;i<n;i++)
        {
            if(s[i]!=t[i])
            {
                c++;
            }
        }
        if(c>2 || c==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        c=0;
    }
}
