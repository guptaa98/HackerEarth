#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int ctaxi,otaxi,d,oc,of,od,cs,cb,cm,cd;
    cin>>d;
    cin>>oc>>of>>od;
    cin>>cs>>cb>>cm>>cd;
    otaxi=oc+(d-of)*od;
    ctaxi=cb+(d*cm)/cs+d*cd;
    if(ctaxi<otaxi)
    {
        printf("Classic Taxi");
    }
    else
    {
        printf("Online Taxi");
    }

}
