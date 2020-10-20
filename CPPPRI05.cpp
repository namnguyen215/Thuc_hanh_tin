#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
bool nt(int i){
	if(i==0||i==1) return false;
	for(int j=2;j<=sqrt(i);j++){
		if(i%j==0) return false;
	}
	return true;
}
int main(){
	int t;cin>>t;
	while(t--){
		int a,b;cin>>a>>b;
		if(a>b) swap(a,b);
		for(int i=a;i<=b;i++){
			if(nt(i)) cout<<i<<" ";
		}
		cout<<endl;		
	}
	
}
