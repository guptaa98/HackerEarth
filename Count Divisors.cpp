#include<iostream>
using namespace std;
int main()
{
	int l,r,k,c,i;
	c=0;
	cin>>l>>r>>k;
	for(i=l;i<=r;i++)
	{
		if(i%k==0)
		{
			c=c+1;
		}
	}
	cout<<c;
}
