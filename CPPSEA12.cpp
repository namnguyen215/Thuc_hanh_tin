#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		long long dd[1000000]={0};
		long long n,x;
		cin>>n>>x;
		long long a[n];
		for(long i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(long i=0;i<n;i++)
		{
			dd[a[i]]++;
		}
		int check=0;
		for(long i=0;i<n;i++)
		{
			if(dd[a[i]+x]!=0) 
			{
				cout<<"1"<<endl;
				check=1;
				break;
			}
		}
		if(check==0) cout<<"-1"<<endl;
	}
}