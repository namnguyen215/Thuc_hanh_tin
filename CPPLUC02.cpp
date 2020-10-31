#include<iostream>
using namespace std;
int so(char x){
    return (int)x-'0';
}
int xuly(string s){
    int tong=0;
    for(int i=0;i<s.length();i++){
        tong+=so(s[i]);
    }
    if(tong%9==0 && tong!=0) return 1;
    else return 0;
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;cin>>s;
        cout<<xuly(s)<<endl;
    }
}