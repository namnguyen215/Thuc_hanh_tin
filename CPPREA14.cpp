#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int k,n;
		cin>>n>>k;
		long long a[n*k+1];
		for(long long i=0;i<n*k;i++) cin>>a[i];
		sort(a,a+n*k);
		for(long long i=0;i<n*k;i++) cout<<a[i]<<" ";
		cout<<endl;		
	}
}
