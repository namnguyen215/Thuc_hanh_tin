#include<iostream>
using namespace std;
int maxlength(bool a[],bool b[],int n){
    int maxlen=0;
    for(int i=0;i<n;i++){
        int sum1=0,sum2=0;
        for(int j=i;j<n;j++){
            sum1+=a[j];
            sum2+=b[j];
            if(sum1==sum2){
                int len=j-i+1;
                if(len > maxlen)    maxlen=len;
            }
        }
    }
    return maxlen;
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        bool a[n+1],b[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>b[i];
        cout<<maxlength(a,b,n);
    }
}
