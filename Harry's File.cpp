#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,c,d;
    c=0;
    for(i=0;i<s.size();i++)
    {
        if (s[i]==92)
        {
            c=i;
        }
        if(s[i]==46)
        {
            d=i;
        }
    }
    cout<<"Path: "<<s.substr(0,c+1)<<endl;
    cout<<"File name: "<<s.substr(c+1,d-c-1)<<endl;
    cout<<"Extension: "<<s.substr(d+1,s.size()-1);
}
