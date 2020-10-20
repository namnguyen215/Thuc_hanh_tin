#include<bits/stdc++.h>
#define ll long long
using namespace std;
int scs(ll n){
	int dem=0;
	while(n){
		n=n/10;
		dem++;
	}
	return dem;
}
int RG(ll n){
	ll sum=0;
	int x=scs(n);
	for(int i=0;i<x;i++){
		sum+=n%10;
		n=n/10;
	}
	if(sum%9==0) return 9;
	return sum%9;
}
int main(){
	int t;cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cout<<RG(n)<<endl;
	}
}
