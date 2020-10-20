#include<bits/stdc++.h>
using namespace std;
vector<long long> a;
void fibo(){
	a.push_back(0);a.push_back(1);
	long long x;
	for(int i=2;i<92;i++){
		x=a[i-1]+a[i-2];
		a.push_back(x);
	}
}
int main(){
	fibo();
	int t;cin>>t;
	while(t--){
		long long n;
		cin>>n;
		for(int i=0;i<93;i++){
			if(a[i]==n){
				cout<<"YES"<<endl;
				break;
			}
			if(a[i]>n){
			    cout<<"NO"<<endl;
			    break;
			}
		}
		
	}
}
