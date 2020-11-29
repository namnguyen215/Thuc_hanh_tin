#include<bits/stdc++.h>
using namespace std;
long long P=1000000007;

int main(){
	int t;cin>>t;
	while(t--){
        int n,x,b;
        cin>>n>>x;b=n;
        long long a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
        long long tong=0;
        // for(int i=n-1;i>=0;i--){
        //     long long tmp=pow(x,i);
        //     tong=tong%P+(a[i]%P)*(tmp%P);
        // }
        for(int i=0;i<n;i++){
			tong+=(a[i]%P*((long long)pow(x,--b)%P))%P;
		}	
        cout<<tong<<endl;
	}
}