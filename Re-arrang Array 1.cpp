#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int j,i,n;
        cin>>n;
        long long a[n];
        long long b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(j=0;j<n;j++)
            b[j]=-1;
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                if(a[i]==j) 
                b[j]=a[i];
        for(j=0;j<n;j++)
            cout<<b[j]<<" ";
        cout<<endl;
    }
}
