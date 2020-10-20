#include<bits/stdc++.h>
using namespace std;
long long a[10010];
long long M=1e9+7;
void fibo(){
	a[0]=0;a[1]=1;
	for(int i=2;i<=1000;i++){
		a[i]=(a[i-1]%M+a[i-2]%M)%M;
	}
}
int main()
{
	fibo();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<a[n]<<endl;
	}
}
