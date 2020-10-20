#include<bits/stdc++.h>
#define ll long long
using namespace std;
long minSwap(vector<ll> a,ll n,ll k){
	ll cnt=0;
	for(ll i=0;i<n;i++){
		if(a[i]<=k) cnt++;
	}
	ll bad=0;
	for(ll i=0;i<cnt;i++){
		if(a[i]>k) bad++;
	}
	ll ans=bad;
	for(ll i=0,j=cnt;j<n;i++,j++){
		if(a[i]>k) bad--;
		if(a[j]>k) bad++;
		ans=min(ans,bad);
	}
	return ans;
}

int main(){
	int t;cin>>t;
	while(t--){
		long long n,x,k;cin>>n>>k;
		vector<ll> a;
		for(long long i=0;i<n;i++){
			cin>>x;a.push_back(x);
		}
		cout<<minSwap(a,n,k)<<endl;
	}
}
