#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=1;j<=t;j++)
	{
		long long n;
		cin>>n;
		for(long long i=2;i<=sqrt(n);i++)
		{
			while(n%i==0)
			{
				cout<<i<<" ";
				n=n/i;
			}
		}
		if(n!=1)
			{
				cout<<n;
			}
		cout<<endl;
	}
}
