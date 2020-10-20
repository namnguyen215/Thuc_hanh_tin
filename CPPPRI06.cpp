#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
long long a[10000]={0};
void sangnt(){
	a[0]=0;a[1]=0;
	for(int i=2;i<10000;i++){
		if(a[i]==0){
			for(int j=i*2;j<10000;j+=i){
				a[j]=1;
			}
		}
	}
}
int main(){
	sangnt();
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
//		long long a[n+1]={0};
//		sangnt(a,n);
		for(int i=2;i<n;i++){
			if(a[i]==0&&a[n-i]==0){
				cout<<i<<" "<<n-i;
				break;
			}
		}
		cout<<endl;
	}
	
}
