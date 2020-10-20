#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		long long a[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		int tong =0,dem=0;
		for(int i=0;i<n-1;i++)
		{
			for(int j=i+1;j<n;j++){
				tong=a[i]+a[j];
				if(tong==k) dem++;
			}
		}
		cout<<dem<<endl;
	}
}
