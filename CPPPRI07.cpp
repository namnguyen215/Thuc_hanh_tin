#include<iostream>
#include<algorithm>
using namespace std;
int check(int n){
	int dem=0;
	for(int i=2;i*i<n;i++){
		if(n%(i*i)==0) return 0;
		if(n%i==0) dem++;
	}
	if(dem==3) return 1;
	else return 0; 
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int count=0; 
		for(int i=2;i<=n;i++){
			if(check(i)) count++;
		}
		cout<<count<<endl;
				
	}
}
