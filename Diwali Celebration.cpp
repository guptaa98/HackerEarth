#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,k,n;
    scanf("%d",&t);
    while(t>0)
    {
        cin>>a>>k>>n;
        cout<<k*(n-1)+a<<endl;
        t--;
    }
}
