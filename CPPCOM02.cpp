#include<bits/stdc++.h>
using namespace std;
bool cauhinhcuoi;
int a[100];
void print(int k){
    for(int i=1;i<=k;i++)
        cout<<a[i];
    cout<<" ";
}
void sinh(int n,int k){
    int i=k;
    while(i>0&&a[i]==n-k+i) i--;
    if(i==0){
        cauhinhcuoi=true;
        return;
    }
    else{
        a[i]++;
        for(int j=i;j<=k;j++)
            a[j]=a[i]+j-i;
    }
    return;
}
int main(){
    int t;cin>>t;
    while(t--){
        cauhinhcuoi=false;
        int n,k;cin>>n>>k;
        for(int i=1;i<=k;i++)    a[i]=i;
        while(!cauhinhcuoi){
            print(k);
            sinh(n,k);
        }
        cout<<endl;
    }
}