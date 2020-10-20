#include<iostream>
using namespace std;
bool ngto(long long i){
    for(long long j=2;j*j<=i;j++){
        if(i%j==0) return false;
    }
    return true;
}
int main(){
    int t;cin>>t;
    while(t--){
        long long x;
        cin>>x;
        long dem=0;
        for(long long i=2;i*i<=x;i++){
            if(ngto(i)) dem++;
        }
        cout<<dem<<endl;
    }
}