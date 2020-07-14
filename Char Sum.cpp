#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin>>S;
    int f[26]={0};
    int i,weight;
    for(i=0;i<S.size();i++)
    {
        f[S[i]-97]++;
    }
    weight=0;
    for(i=0;i<26;i++)
    {
        weight=weight+(f[i]*(i+1));
    }     
    printf("%d",weight);   
}
