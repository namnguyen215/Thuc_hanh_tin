#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[101];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long t=a[0];
        for(int i=0;i<n;i++){
            long long kt=1;
            for(int j=i;j<n;j++){
                kt=kt*a[j];
                t=max(t,kt);
            }
        }
        cout<<t<<endl;
    }
}
