#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,temp,count,sum;
    scanf("%d",&n);
    temp=n;
    count=0;
    sum=0;
    int k=1;
    while(temp!=0)
    {
        sum=sum+(k*(temp%10));
        k=k+1;
        count=count+1;
        temp=temp/10;
    }
    if(sum%11==0 && count==10)
    {
        printf("Legal ISBN");
    }
    else 
    {
        printf("Illegal ISBN");
    }
}
