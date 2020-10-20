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
		long long i;
		for( i=2;i<=sqrt(n);i++)
		{
			while(n%i==0)
			{
				n=n/i;
			}
		}
		if(n!=1)
			{
				cout<<n;
			}
		else cout<<i-1;
		cout<<endl;
	}
}
