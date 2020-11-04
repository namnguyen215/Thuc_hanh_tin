#include<bits/stdc++.h>
using namespace std;
int TangMax(int a[],int n){
    int b[n];
    b[0]=1;
    for(int i=1;i<n;i++){
        b[i]=1;
        for(int j=0;j<i;j++){
            if(a[i]>a[j] && b[i]<b[j]+1)
                b[i]=b[j]+1;
        }
    }

    return *max_element(b,b+n);
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        cout<<TangMax(a,n)<<endl;
    }
}