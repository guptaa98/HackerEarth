#include<bits/stdc++.h>
using namespace std;
int main()
{
   int num,t,temp,i,n,nnum,j;
   cin>>n;
   nnum=0;
   temp=0;
   vector<int> A;
   for(i=0;i<n;i++)
   {
       cin>>num;
       A.push_back(num);
   }
   int B[n/2],C[n/2];
   for(i=0;i<n/2;i++)
   {
        B[i]=A[i];
   }
   for(i=n/2,j=0;j<n/2,i<n;j++,i++)
   {
      C[j]=A[i];
   }
   for(i=0;i<n/2;i++)
   {
      while(B[i]>0)
      {
         t=B[i];
         B[i]=B[i]/10;
      }
      nnum=nnum*10+t;
   }
   for(i=0;i<n/2;i++)
   {
      temp=C[i]%10;
      nnum=nnum*10+temp;
   }
   if(nnum%11==0)
   {
      printf("OUI");
   }
   else
   {
      printf("NON");
   }
}
   

