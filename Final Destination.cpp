#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,x,y;
    x=y=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='L')
        {
            x--;
        }
        if(s[i]=='R')
        {
            x++;
        }
        if(s[i]=='U')
        {
            y++;
        }
        if(s[i]=='D')
        {
            y--;
        }
    }
    cout<<x<<" "<<y;
}
