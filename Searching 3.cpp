#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		long a[n+1];
		for(int i=0;i<n-2;i++) cin>>a[i];
		for(int i=1;i<n-2;i++){
			if(a[i]-a[i-1]>1){
				cout<<a[i-1]+1<<endl;
				break;
			}
		}
	}
}
