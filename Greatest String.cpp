#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int q,t,i,j,c;
    cin>>t;
    c=0;
    for(i=0;i<t;i++)
    {
        cin>>s;
        cin>>q;
        c=0;
        for(j=0;j<s.size();j++)
        {
            if(c<q)
            {
            if(s[j]=='a')
            {
                s[j]=98;
                c++;
            }
            if(s[j]=='e')
            {
                s[j]=102;
                c++;
            }
            if(s[j]=='i')
            {
                s[j]=106;
                c++;
            }
            if(s[j]=='o')
            {
                s[j]=112;
                c++;
            }
            if(s[j]=='u')
            {
                s[j]=118;
                c++;
            }
            }
        }
        cout<<s<<endl;
    }
}
