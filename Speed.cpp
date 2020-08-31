#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,i,t,n;
    vector<long int>speed;
    long int s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>s;
            speed.push_back(s);
        }
        c=1;
        for(i=1;i<n;i++)
        {
            if(speed[i]<=speed[i-1])
            {
                c++;
            }
            if(speed[i]>speed[i-1])
            {
                speed[i]=speed[i-1];
            }

        }
        cout<<c<<endl;
        speed.clear();
    }
}
