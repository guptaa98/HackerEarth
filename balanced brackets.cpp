#include<bits/stdc++.h>
using namespace std;
bool isbal(string ex)
{
    int i;
    char x;
    stack<char>stk;
    for(i=0;i<ex.length();i++)
    {
        if(ex[i]=='(' || ex[i]=='{' || ex[i]=='[')
        {
            stk.push(ex[i]);
            continue;
        } 
        if (stk.empty())
        {
            return false;
        }
        switch(ex[i])
        {
        case ')':
                x=stk.top();
                stk.pop();
                if(x=='{' || x=='{')
                {
                    return false;
                }
                break;
        case '}':
                x=stk.top();
                //cout<<x<<endl;
                stk.pop();
                if(x=='(' || x=='[')
                {
                    return false;
                }
                break;
        case ']':
                x=stk.top();
                //cout<<x<<endl;
                stk.pop();
                if(x=='{' || x=='(')
                {
                    return false;
                }
                break;   
        }
    }       
    return (stk.empty());
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if (isbal(s))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
