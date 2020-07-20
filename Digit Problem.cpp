#include<bits/stdc++.h>
#include<sstream>
using namespace std;
int main()
{
    string n;
    stringstream str;
    long long int x,y;
    int k;
    std::cin>>x>>k;
    str<<x;
    str>>n;
    y=n.size();
    if(k<=y)
    {
        for(x=0;x<k;x++)
        {
            if(n[x]=='9')
            {
                k++;
            }
            n[x]='9';
        }
    }
    else
    {
        for(x=0;x<y;x++)
        {
            n[x]='9';
        }
    }
    std::cout<<n;
}
