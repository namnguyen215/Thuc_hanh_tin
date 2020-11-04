#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int diff[n];
        for(int i=0;i<n-1;i++){
            diff[i]=a[i+1]-a[i];
        }
        int max_diff=diff[0];
        for(int i=1;i<n-1;i++){
            if(diff[i-1]>0 && diff[i]>0)
                diff[i]+=diff[i-1];
            if(max_diff<diff[i])
                max_diff=diff[i];
        }
        if(max_diff>=0)
        	cout<<max_diff<<endl;
        else cout<<-1<<endl;
    }
}
