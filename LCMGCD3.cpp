#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++)    cin>>a[i];
        int x=a[0];
        for(int i=1;i<n;i++){
        	x=__gcd(x,a[i]);
        	if(x==1) break;
		}       
//        x=x%M;
        long tich=1;
        for(int i=0;i<n;i++){
            tich=((tich%M)*(a[i]%M))%M;
        }
        long result=1;
        for(int i=0;i<x;i++){
            result=((result%M)*(tich%M))%M;

        }
        cout<<result<<endl;
    }
}
