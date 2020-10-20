#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long a[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		sort(a,a+n);
		int count=0;
		for(int i=1;i<n;i++){
			if(a[i]-a[i-1]>1) count+=a[i]-a[i-1]-1;
		}
		cout<<count<<endl;
	}
}
