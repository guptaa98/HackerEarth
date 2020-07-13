#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>A;
    int i,n,temp;
    temp=0;
    for(i=0;;i++)
    {
        cin>>n;
        if(n!=42)
        {
            A.push_back(n);
            temp=temp+1;
        }
        else
        {
            break;
        }
    }
    for(i=0;i<temp;i++)
    {
        cout<<A[i]<<endl;
    }
}
