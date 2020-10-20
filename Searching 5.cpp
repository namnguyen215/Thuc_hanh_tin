#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n+1];
		for(long long i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		bool ok=false;
		for(long long i=1;i<n;i++){
				if(a[i]>a[i-1]){
					ok=true;
					cout<<a[i-1]<<" "<<a[i]<<endl;
					break;
				}
		}
		if(ok==false) cout<<"-1"<<endl;
	}
}

