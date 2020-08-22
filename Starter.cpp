#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long int n;
    long long int l3,l5,l15,sum3,sum5,sum15,n3,n5,n15;
    sum3=sum5=0;
    sum15=l15=0;
    l3=l5=0;
    n3=n5=0;
    n15=0;
    cin>>t;
    while(t>0)
    {
        cin>>n;
        n--;
        l3=n-(n%3);
        l5=n-(n%5);
        l15=n-(n%15);
        n3=((l3-3)/3)+1;
        n5=((l5-5)/5)+1;
        n15=((l15-15)/15)+1;
        if(n3<0)
        {
            n3=0;
        }       
        if(n5<0)
        {
            n5=0;
        }
        if(n15<0)
        {
            n15=0;
        }       
        sum3=((3+l3)*n3)/2;
        sum5=((5+l5)*n5)/2;
        sum15=((l15+15)*n15)/2;
        cout<<sum3+sum5-sum15<<endl;
        t--;
    }
}
