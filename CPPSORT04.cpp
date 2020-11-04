#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[m],c[100000]={0};
        for(int i=0;i<n;i++){
            cin>>a[i];
            c[a[i]]++;
        }
        for(int j=0;j<m;j++){
            cin>>b[j];
            c[b[j]]++;
        }
        vector<int> vt,vt2;
        for(int i=0;i<100000;i++){
            if(c[i]>=1) vt.push_back(i);
            if(c[i]>1) vt2.push_back(i);
        }
        for(int i=0;i<vt.size();i++) cout<<vt[i]<<" ";
        cout<<endl;
        for(int i=0;i<vt2.size();i++) cout<<vt2[i]<<" ";
        cout<<endl;
    }
}