#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool possible=true;
    int n,i;
    cin>>n;
    vector<int>a;
    int num;
    for(i=0;i<n;i++)
    {
        cin>>num;
        a.push_back(num);
    }
    for(i=0;i<n;i++)
    {
        a[i+1]-=a[i];
        a[i]=0;
        if(a[i+1]<0)
        {
            possible=false;
            break;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            possible=false;
        }
    }
    if (a[n-1]!=0)
    {
        possible=false;
    }
    if(possible==true)
    {
        cout<<"YES"<<endl;
    }
    if(possible==false)
    {
        cout<<"NO";
    }
}
