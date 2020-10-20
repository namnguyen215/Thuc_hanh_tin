#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,q,l,r;
		cin>>n>>q;
		int a[n+1];
		for(int i=1;i<=n;i++) cin>>a[i];
		while(q--){
			cin>>l>>r;
			long sum=0;
			for(int i=l;i<=r;i++) sum+=a[i];
			cout<<sum<<endl;
		}
	}
}
