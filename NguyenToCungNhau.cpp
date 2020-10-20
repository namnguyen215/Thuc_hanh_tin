#include<bits/stdc++.h>
using namespace std;
bool nt(int dem){
	if(dem==0||dem==1) return false;
	for(int i=2;i<=sqrt(dem);i++){
		if(dem%i==0) return false;
	}
	return true;
}
int coprime(int n){
	int dem=0;
	for(int i=1;i<=n;i++){
		if(__gcd(n,i)==1) dem++;
	}
	if(nt(dem)) return 1;
	else return 0;
}

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		cout<<coprime(n)<<endl;
	}
}
