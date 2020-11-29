#include<bits/stdc++.h>
using namespace std;
bool nt(int x){
    if(x==0||x==1) return false;
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0) return false;
    }
    return true;
}
int main(){
    int t;cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int dem=0;
        for(int i=l;i<=r;i++){
            if(nt(i))
                dem++;
        }
        cout<<dem<<endl;
    }
}