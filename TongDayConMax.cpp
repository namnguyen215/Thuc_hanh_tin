#include<iostream>
#include<vector>
using namespace std;
int maxSubarrayProduct(int a[],int n){
	int max_sum=a[0];
	int max_here=a[0];
	for(int i=0;i<n;i++){
		max_here=max(a[i],max_here+a[i]);
		max_sum=max(max_sum,max_here);
	}
	return max_sum;
}
int main(){
    int t;cin>>t;
    while(t--){
		int n;cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		cout<<maxSubarrayProduct(a,n)<<endl;
    }
}
