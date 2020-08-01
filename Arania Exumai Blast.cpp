#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n,i;
    n=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            n++;
        }
    }
    cout<<n;
}
