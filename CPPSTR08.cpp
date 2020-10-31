#include<bits/stdc++.h>
using namespace std;
long long tong(string s){
    vector<long> vt;
    long dem=1;
    for(long i=0;i<s.length();i+=dem){
        dem=1;
         if(s[i]>='0'&&s[i]<='9'){
             long long temp=0;
             for(long j=i;s[j]>='0' && s[j]<='9' && j<s.length();j++){
                 temp=temp*10+(int)(s[j]-'0');
                 dem++;
             }
         vt.push_back(temp);         
         }
    }
    long long sum=0;
    for(int i=0;i<vt.size();i++) sum+=vt[i];
    return sum;
}
int main(){

    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<tong(s)<<endl;
    }
}