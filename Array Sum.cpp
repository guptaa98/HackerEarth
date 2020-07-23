#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector <long long int> A;
    long long int num;
    for(i=0;i<n;i++)
    {
        cin>>num;
        A.push_back(num);
    }
    for(i=1;i<n;i++)
    {
        A[0]=A[0]+A[i];
    }
    cout<<A[0];
}
