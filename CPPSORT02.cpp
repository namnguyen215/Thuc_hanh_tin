#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,i,j;
        cin>>n>>x;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(abs(x-a[j])>abs(x-a[j+1])) swap(a[j],a[j+1]);
        }
    }
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    }
}