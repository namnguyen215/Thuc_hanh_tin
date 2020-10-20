#include<bits/stdc++.h>
using namespace std;
long long a[100][100];
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int hang=n,cot=m,k=1,p=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++) cin>>a[i][j];
        while(p<m*n){
            for(int i=p;i<cot;i++){
                cout<<a[p][i]<<" ";
            } 
            for(int i=p+1;i<hang;i++){
                cout<<a[i][cot-1]<<" ";
            } 
            if(p!=hang-1)
                for(int i=cot-2;i>=p;i--){
                    cout<<a[hang-1][i]<<" ";
                } 
            if(p!=cot-1)
                for(int i=hang-2;i>p;i--){
                    cout<<a[i][p]<<" ";
                } 
            p++;hang--;cot--;
        }
        cout<<endl;
    }
    
}
