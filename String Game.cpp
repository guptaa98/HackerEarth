#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,turn,p1,p2;
    string s;
    cin>>t;
    while(t>0)
    {
        turn=1;
        p1=p2=0;
        cin>>s;
        int freq[26]={0};
        for(i=0;i<s.size();i++)
        {
            freq[s[i]-97]++;
        }
        for(i=0;i<26;i++)
        {
            if(freq[i]>0)
            {
            if(turn%2!=0)
            {
                p1++;
            }
            if(turn%2==0)
            {
                p2++;
            }
            turn++;
            }
        }
        if(p1>=p2 && turn%2==0 )
        {
            cout<<"Player1"<<endl;
        }
        if(p1<=p2 && turn%2!=0)
        {
            cout<<"Player2"<<endl;
        }
        t--;
    }
}
