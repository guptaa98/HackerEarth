#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int g,j,i;
    g=0;
    if(s[s.size()-1]=='6')
    {
        cout<<"-1"<<endl;
    }
    else
    {
        for(i=0;i<s.size();i++)
        {
        if(s[i]!='6')
        {
            g++;
        }
        }
        cout<<g<<endl;       
    }    
}
