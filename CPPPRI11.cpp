#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long t=n,i=2;
        long long tong=1;
        while(i<=sqrt(n)){
            if(t%i==0){
                tong+=i;
                t=t/i;
            }
            else    
                i++;
        }
        if(t!=1)
            tong+=t;
        if(tong==n)
            cout<<"1"<<endl;
        else cout<<"0"<<endl;
    }
}