#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,i,n,sum,k,temp,c,j,y,s;
	c=0;
	vector<int>A;
	vector<int>X;
	vector<int>index;
	cin>>n;
	for (i=0;i<n;i++)
	{
		cin>>num;
		A.push_back(num);
	}
	sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+A[i];
	}
	for(i=0;i<n;i++)
	{
		k=A[i];
		temp=sum-k;
		if(temp%7==0)
		{
			index.push_back(i);
			X.push_back(k);
			c=c+1;
		}
		temp=0;
	}
	s=X[0];
	y=index[0];
	for(j=1;j<c;j=j+1)
	{
		if(X[j]<X[i])
		{
			s=X[j];
			y=index[j];
		}
	}
	cout<<y;
}
