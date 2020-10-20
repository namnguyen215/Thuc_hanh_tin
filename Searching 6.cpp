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
		long min=99999,tong=0;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				tong=abs(a[i]+a[j]);
				if(tong<abs(min)) min=a[i]+a[j];
			}
		}
		cout<<min<<endl;
	}
}

