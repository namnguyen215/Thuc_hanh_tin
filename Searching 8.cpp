#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n,x;
		cin>>n>>x;
		long long a[n+1];
		for(long long i=0;i<n;i++){
			cin>>a[i];
		}
		int dem=0;
		for(long long i=0;i<n;i++){
			if(a[i]==x) dem++;
		}
		if(dem) cout<<dem;
		else cout<<"-1";
		cout<<endl;
	}
}

