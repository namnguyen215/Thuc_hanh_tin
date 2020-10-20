#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int k,n;
		cin>>n>>k;
		long long a[n];
		for(long long i=0;i<n;i++) cin>>a[i];
		sort(a+n,a);
		cout<<a[k];
		cout<<endl;
	}
}
