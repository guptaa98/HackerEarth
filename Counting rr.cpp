#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,c;
    c=0;
    for(i=0;i<s.size();i++)
    {
        if(s.substr(i,2)=="rr")
        {
            c++;
        }
    }
    cout<<c;
}
