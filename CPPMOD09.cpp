#include<bits/stdc++.h>
using namespace std;
long long P=1e9+7;
int nCrmodp (int n,int r){
	if(r>n-r) r=n-r;
	int C[r+1];
	memset(C, 0, sizeof(C)); 
	C[0]=1;
	for(int i=1;i<=n;i++){
		for(int j=min(i,r);j>0;j--){
			C[j]=(C[j]+C[j-1])%P;
		}
	}
	return C[r];
}
int main(){
	int t;cin>>t;
	while(t--){
		long long n,r;
		cin>>n>>r;
		cout<<nCrmodp(n,r)<<endl;
		
	}
}
