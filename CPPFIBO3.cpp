#include<bits/stdc++.h>
using namespace std;
long long f[18];
int check[2000]={0};
void fibo(){
	f[0]=0;f[1]=1;
	check[0]=1;check[1]=1;
	for(int i=2;i<18;i++){
		f[i]=f[i-1]+f[i-2];
		check[f[i]]=1;
	}
		
}
int main(){
	int t;cin>>t;
	fibo();
	while(t--){
		int n;cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(check[a[i]]==1)	cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
