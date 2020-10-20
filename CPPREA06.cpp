#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        long a[n+1];
        for(int i=0;i<n;i++) cin>>a[i];
        vector<int> lg,ilg;
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                if((a[i]==a[i+1])){
                lg.push_back(a[i]*2);
                a[i+1]=0;                    
                }
                else lg.push_back(a[i]);

            }
            else ilg.push_back(a[i]);
        }
        for(int i=0;i<lg.size();i++) cout<<lg[i]<<" ";
        for(int i=0;i<ilg.size();i++) cout<<ilg[i]<<" ";
        cout<<endl;
    }
}