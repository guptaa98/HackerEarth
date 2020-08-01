#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c;
    c=0;
    string s;   
    cin>>n;
    while(n>0)
    {
        string temp="--";
        cin>>s;
        temp=temp+s;
        temp=temp+"--";
        for(i=0;i<temp.length();i++)
        {
            if(temp[i]=='B')
            {
                if(temp[i-1]=='W')
                {
                    c++;
                    temp[i-1]='-';
                }
                if(temp[i-2]=='W')
                {
                    c++;
                    temp[i-2]='-';
                }
                if(temp[i+1]=='W')
                {
                    c++;
                    temp[i+1]='-';
                }
                if(temp[i+2]=='W')
                {
                    c++;
                    temp[i+2]='-';
                }
            }
        }
        cout<<c<<endl;
        c=0;
        n--;
    }
}
