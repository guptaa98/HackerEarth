#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,score,skip;
    score=skip=0;
    long int x,y;
    vector<long int>a;
    cin>>n>>x;
    for(i=0;i<n;i++)
    {
        cin>>y;
        a.push_back(y);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>x)
        {
            skip++;
            if(skip>1)
            {
                break;
            }
        }
        else if(a[i]<=x)
        {
            score++;
        }
    }
    cout<<score;
}
