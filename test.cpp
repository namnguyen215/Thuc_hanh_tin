#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n][m];
        int hang=n,cot=m,k=1,p=0;
        while(p<m*n){
            for(int i=p;i<cot;i++) cin>>a[p][i];
            for(int i=p+1;i<hang;i++) cin>>a[i][cot-1];
            if(p!=hang-1)
                for(int i=cot-2;i>=p;i--) cin>>a[hang-1][i];
            if(p!=cot-1)
                for(int i=hang-2;i>p;i--) cin>>a[i][p];
            p++;hang--;cot--;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++) cout<<a[i][j]<<" ";
            cout<<endl;
        }
    }
    
}