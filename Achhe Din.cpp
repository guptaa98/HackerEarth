#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int c,n,i;
        cin>>n;
        long int num;
        vector<long int> a;
        for(i=0;i<n;i++)
        {
            cin>>num;
            a.push_back(num);
        }
        unordered_map<int,int>mp;
        for (i = 0; i < n; i++) 
        {
            mp[a[i]]++; 
        }
        for(i=0;i<a.size();i++)
        {
            if(mp[a[i]]==1)
            {
                cout<<a[i]<<endl;
                break;
            }
        }
    }
}
