#include<bits/stdc++.h>
using namespace std;

long long fivesix(string s){
    long long temp=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='5') s[i]='6';
        temp=temp*10+ (int)(s[i]-'0'); 
    }
    return temp;
}

long long sixfive(string s){
    long long temp=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='6') s[i]='5';
        temp=temp*10+ (int)(s[i]-'0'); 
    }
    return temp;    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<sixfive(s1)+sixfive(s2)<<" "<<fivesix(s1)+fivesix(s2)<<endl;
    }
}