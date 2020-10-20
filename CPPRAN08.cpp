#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        long a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        int csum[n+1]; 
            csum[0]=a[0];
        for(int i=1;i<n;i++) 
            csum[i]=csum[i-1]+a[i];
        int maxsum=csum[k-1],maxindex=k-1;
        for(int i=k;i<n;i++){
            int curr_sum=csum[i]-csum[i-k];
            if(curr_sum>maxsum){
                maxsum=curr_sum;
                maxindex=i;
            } 
        }
        for(int i=maxindex-k+1;i<=maxindex;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}