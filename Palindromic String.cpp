#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	int n,c,i,j;
	c=1;
	char a[100],b[100];
    gets(a);
    n=strlen(a);
	for (i=0,j=n-1;i<n,j>=0;j--,i++)
	{
		b[i]=a[j];
	}
	for (i=0;i<n;i++)
	{
		if (a[i]!=b[i])
		{
			c=c+1;
		}
	}
	if (c==1)
	{
		cout<<"YES";
	}
	else 
	{
		cout<<"NO";
	}
}
