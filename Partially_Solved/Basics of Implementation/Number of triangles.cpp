#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,t,n,b1,b2,ans;
	cin>>t;
	for(i=0;i<t;i++)
	{
		ans=0;
		cin>>n>>b1>>b2;
		ans=((n-2)*(n-6))+(n-2);
		cout<<ans<<endl;
	}
}
