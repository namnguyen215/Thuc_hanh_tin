#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k;
        vector<int> vt;
        for(int i=0;i<n*n;i++){
            cin>>x;
            vt.push_back(x);
        }
        sort(vt.begin(),vt.end());
        cout<<vt[k-1]<<endl;
    }
}