#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		long long k;
		cin>>n>>k;
		long long sum=0;
		for(int i=1;i<=n;i++){
			if(i>k) sum+=i%k;
			else sum+=i;
		}
		if(sum==k) cout<<1<<endl;
		else cout<<0<<endl;
	}
	
}
