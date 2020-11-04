#include<bits/stdc++.h>
#define ll long long
using namespace std;
int batdau(ll a[],ll n,ll start,ll min){
    for(ll i=0;i<start;i++){
        if(a[i]>min) return i+1;
    }
    return start+1;
}
int ketthuc(ll a[],ll n,ll end,ll max){
    for(ll i=n-1;i>end;i--){
        if(a[i]<max) return i+1;
    }
    return end+1;
}
int main(){
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        ll start=0,end=n-1;
        for(ll i=0;i<n;i++){
            if(a[i]>a[i+1]){
                start=i;
                break;
            }
        }
        for(ll i=n-1;i>0;i--)
            if(a[i]<a[i-1]){
                end=i;
                break;
            }
        ll max=a[start],min=INT_MAX;
        for(ll i=start+1;i<=end;i++){
            if(a[i]>max) max=a[i];
            if(a[i]<min) min=a[i];
        }
        cout<<batdau(a,n,start,min)<<" "<<ketthuc(a,n,end,max)<<endl;
    }
}