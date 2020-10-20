#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
		int n;cin>>n;
		int x,tich;
		int a[n+7];
		vector<int> vt;
		for(int i=1;i<=n;i++) cin>>a[i];
		a[0]=a[1]; a[n+1]=a[n];
		for(int i=1;i<=n;i++){
			vt.push_back(a[i-1]*a[i+1]);
		}
		for(int i=0;i<vt.size();i++) cout<<vt[i]<<" ";
		cout<<endl;
    }
}
