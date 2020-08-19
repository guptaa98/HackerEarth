#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,k;
	s=0;
    cin>>n;
	while(n>0)
	{
		cin>>k;
		if(k>0)
		{
			s=s+k;
		}
		n--;
	}
    cout<<s;
}
