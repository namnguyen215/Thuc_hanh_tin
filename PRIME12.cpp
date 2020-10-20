#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=1;j<=t;j++)
	{
		long long n;
		int k;
		cin>>n;
		cin>>k;
		vector<int> vt;
		for(long long i=2;i<=sqrt(n);i++)
		{
			while(n%i==0)
			{
				vt.push_back(i);
				n=n/i;
			}
		}
		if(n!=1)
			{
				vt.push_back(n);
			}
		if(k>vt.size()) cout<<"-1";
		else cout<<vt[k-1];
		cout<<endl;
	}
}
