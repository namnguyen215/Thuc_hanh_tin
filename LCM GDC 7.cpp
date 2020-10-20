#include<bits/stdc++.h>
#define ll long long
using namespace std;

long long bcnn(ll x,ll y,ll z){
	long long a=(x*y)/__gcd(x,y);
	long long b=(a*z)/__gcd(a,z);
	return b;
}
int main(){
	int t;cin>>t;
	while(t--){
		ll x,y,z;
		int n;
		cin>>x>>y>>z>>n;
		long long b=bcnn(x,y,z);
		long long k=(long long)pow(10,n-1);
		long long i=k/b;
		if(k%b==0){
			cout<<b*i<<endl; 
			return 0;
		} 
		else if(i>0&&(b*(i+1)<pow(10,n))){
			cout<<b*(i+1)<<endl;
		}
		else cout<<"-1"<<endl;
	}
}
