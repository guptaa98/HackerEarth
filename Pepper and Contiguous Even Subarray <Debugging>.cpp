#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,clen,flen;
    long int num;
    cin>>t;
    while(t--)
    {
        clen=0;
        flen=0;
        cin>>n;
        vector<long int>a;
        for(i=0;i<n;i++)
        {
            cin>>num;
            a.push_back(num);
        }
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                clen++;
                flen=max(clen,flen);
            }
            else
            {
                clen=0;
            }
        }
        if(flen>0)
        {
            cout<<flen<<endl; 
        }
        else
        {
            cout<<"-1"<<endl;
        }
             
    }
}
