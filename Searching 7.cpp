#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n,k;
		cin>>n>>k;
		long long a[n+1];
		for(long long i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		for(int i=0;i<k;i++){
			cout<<a[n-1-i]<<" ";
		}
		cout<<endl;
	}
}

