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
		for(long long i=0;i<n;i++){
			if(a[i]==x) cout<<i+1<<endl;
		}
	}
}
