#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long a[n+2];
		vector<long long> vt;
		for(long long i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>0)
				vt.push_back(a[i]);
		}
		sort(vt.begin(),vt.end());
		long long k=1;
		for(long long i=0;i<vt.size();i++){
			if(vt[i]!=k) break;
			else if(vt[i+1]!=k) k++;
		}
		cout<<k<<endl;
	}
	
}
