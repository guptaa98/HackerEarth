#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,a,b;
    vector<long int>A;
    vector <long int>B;
    long int num;
    scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            cin>>num;
            B.push_back(num);
        }
        for(i=0;i<n;i++)
        {
            cin>>num;
            A.push_back(num);
        }
        a=0;
        b=0;
        for(i=0;i<n;i++)
        {
            if(A[i] > a)
            {
                a=A[i];
            }
            if(B[i]>b)
            {
                b=B[i];
            }
        }
        if(a>b)
        {
            cout<<"Alice"<<endl;
        }
        else if(b>a)
        {
            cout<<"Bob"<<endl;
        }
        else if(a==b)
        {
            cout<<"Tie"<<endl;
        }
        A.clear();
        B.clear();
    }    
}
