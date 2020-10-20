#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        long a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        int sum=a[0];
        for(int i=1;i<k;i++) 
            sum+=a[i];
        int maxsum=sum,maxindex=k-1;
        for(int i=k;i<n;i++){
            int sum=sum-a[i-k]+a[i];
            if(sum>maxsum){
                maxsum=sum;
                maxindex=i;
            } 
        }
        for(int i=maxindex-k+1;i<=maxindex;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}
