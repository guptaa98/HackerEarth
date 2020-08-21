#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a,n,num,j;
    vector<int>arr;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>n;
        for(j=0;j<n;j++)
        {
            cin>>num;
            arr.push_back(num);
        }
        for(j=0;j<n;j++)
        {
            if(arr[j]==0)
            {
                a--;
            }
            if(arr[j]==1)
            {
                a=a+2;
            }
            if(a==0 && j<n-1)
            {
                break;
            }
        }
        if(j<n)
        {
            cout<<"No"<<" "<<j+1<<endl;
        }     
        if(j==n)
        {
            cout<<"Yes"<<" "<<a<<endl;
        }
        arr.clear();
    }
}
