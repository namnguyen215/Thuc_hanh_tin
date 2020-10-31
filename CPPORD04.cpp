#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxsum(int a[],int n){
    int incl=a[0];
    int excl=0;
    int excl_new;
    int i;
    for(i=1;i<n;i++){
        excl_new=max(incl,excl);
        incl=excl+a[i];
        excl=excl_new;
    }
    return max(incl,excl);
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<maxsum(a,n)<<endl;
    }
}