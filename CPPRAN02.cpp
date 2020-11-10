#include<iostream>
using namespace std;
string isMountain(int a[],int n,int l[],int r[],int left,int right){
    l[0]=0;
    int lastincr=0;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1])
            lastincr=i;
            l[i]=lastincr;
    }
    r[n-1]=n-1;
    int firstdecr=n-1;
    for(int i=n-2;i>=0;i--){
        if(a[i]>a[i+1])
            firstdecr=i;
        r[i]=firstdecr;
    }
    if(r[left]>=l[right]) return "Yes";
    else return "No";
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        int l[n],r[n];
        int left,right;
        cin>>left>>right;
        cout<<isMountain(a,n,l,r,left,right)<<endl;
    }
}