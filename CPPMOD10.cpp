#include<bits/stdc++.h>
using namespace std;
long long P=1e9+7;
long long luythua(int x,int b){
    if(b==0) return 1;
    long long a=luythua(x,b/2);
    if(b%2==0)  return (a*a)%P;
    else return (x*(a*a%P))%P;
}
int main(){
	int t;cin>>t;
	while(t--){
        int n,x;
        cin>>n>>x;
        long long a[n+1];
        for(int i=n-1;i>=0;i--)
            cin>>a[i];
        long long tong=0;
        for(int i=n-1;i>=0;i--){
			tong+=(a[i]*(luythua(x,i)))%P;
            tong%=P;
		}	
        cout<<tong<<endl;
	}
}
