#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>A;
    int l,i,num;
    for(i=0;i<3;i++)
    {
        scanf("%d",&num);
        A.push_back(num);
    }
    l=A[0];
    for(i=0;i<3;i++)
    {
        if(A[i]>l)
        {
            l=A[i];
        }
    }
    cout<<l;
}
