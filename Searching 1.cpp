#include<bits/stdc++.h>
using namespace std;
int search(long a[],int n,int x){
	for(int i=0;i<n;i++){
		if(a[i]==x) return i+1;
	}
	return -1;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		long a[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<search(a,n,x)<<endl;
	}
}
