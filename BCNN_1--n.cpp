#include<bits/stdc++.h>
using namespace std;
long long ucln(long long a,long long b){
	long long tmp;
	while(b){
		tmp=a%b;
		a=b;
		b=tmp;
	}
	return a+b;
}
long long xuly(long long n){
	if(n<=1) return n;
	else{
		long long i=2,tg=1;
		while(i<=n){
			tg=(tg*i)/ucln(tg,i);
			i++;
		}
		return tg;
	} 
}
int main(){
	int t;
	cin>>t;
	long long n;
	while(t--){
		cin>>n;
		cout<<xuly(n)<<endl;
	}
}
