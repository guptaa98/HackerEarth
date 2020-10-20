#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long int i,c;
    c=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]!=s[i+1])
        {
            c++;
        }
    }
    cout<<c;
}
