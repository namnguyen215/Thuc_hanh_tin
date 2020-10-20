#include<bits/stdc++.h>
#define ll long long
using namespace std;
void findgcd(ll a,ll x,ll y){
	long long g=__gcd(x,y);
	for(int i=0;i<g;i++){
		cout<<a;
	}
	cout<<endl;
}
int main(){
	int t;cin>>t;
	while(t--){
		ll a,x,y;
		cin>>a>>x>>y;
		findgcd(a,x,y);
	}
} 
