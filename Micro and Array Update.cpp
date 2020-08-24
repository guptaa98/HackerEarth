#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n;
		long int small,k,num,diff;
		cin>>n>>k;
		diff=0;
		vector<long int>a;
		for(i=0;i<n;i++)
		{
			cin>>num;
			a.push_back(num);
		}
		small=a[0];
		for(i=0;i<n;i++)
		{
			if(a[i]<small)
			{
				small=a[i];
			}
		}
		if(k>small)
		{
		diff=k-small;
		cout<<diff<<endl;
		}
		if(k<=small)
		{
			cout<<"0"<<endl;
		}
		a.clear();
	}
}
