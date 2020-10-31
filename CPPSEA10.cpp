#include<iostream>
#include<algorithm>
using namespace std;
int a[1000000];
void sangnt(){
    a[0]=1;a[1]=1;
    for(int i=2;i*i<=1000000;i++){
        if(a[i]==0){
            for(int j=i*2;j<=1000000;j+=i){
                a[j]=1;
            }
        }
    }
}
int xuly(int n){
        for(int i=2;i<n;i++){
            if(a[i]==0 && a[n-i]==0){
                return i;
            }
        }
    return -1;
}
int main(){
    int t;cin>>t;
    sangnt();
    while(t--){
        int n;cin>>n;
        int x=xuly(n);
        if(x!=-1) cout<<x<<" "<<n-x<<endl;
        else cout<<x;
        cout<<endl;
    }
}
