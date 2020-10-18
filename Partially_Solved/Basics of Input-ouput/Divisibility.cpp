#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> A;
    int n,i,num,temp,nnum;
    nnum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num);
        A.push_back(num);
    }            
    i=0;
    while(i<n)
    {
        temp=A[i]%10;
        nnum=nnum*10+temp;
        i+=1;
    }
    if(nnum%10==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
