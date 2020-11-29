#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll maxsub(ll a[],ll n){
    ll res=INT_MIN,max_here=0;
    for(ll i=0;i<n;i++){
        max_here=max_here+a[i];
        if(max_here>res) 
            res=max_here;
        if(max_here < 0)
            max_here=0;
    }
    return res;
}
int main(){
    int t;cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n+1];
        for(ll i=0;i<n;i++)
            cin>>a[i];
        cout<<maxsub(a,n)<<endl;
    }
}