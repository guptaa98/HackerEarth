#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,j,d,i;
    vector<long int>a;
    long int num;
    cin>>n>>d;
    long int b[n];
    for(i=0;i<n;i++)
    {
        cin>>num;
        a.push_back(num);
    }
    j=n-1;
    for(i=d-1;i>=0;i--)
    {
        b[j]=a[i];
        j--;
    }
    for(i=d;i<n;i++)
    {
        b[i-d]=a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
}
