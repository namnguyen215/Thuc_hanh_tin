#include<bits/stdc++.h>
using namespace std;
long a[10000]={0};
void sangnt()
{
	a[0]=1;a[1]=1;
	for(int i=2;i<=10000;i++)
	{
		if(a[i]==0)
			{
				for(int j=i*2;j<=10000;j+=i)
					{
						a[j]=1;
					}
			}
	}	
}
int main()
{
	sangnt();
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=2;i<=n;i++)
		{
			if(a[i]==0) cout<<i<<" ";
		}
		cout<<endl;
	}
}
