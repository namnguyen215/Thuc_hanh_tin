#include<bits/stdc++.h>
using namespace std;
int coduochem(string s){
    unordered_map<char,int> freq;
    int max_freq=0;
    for(int i=0;i<s.length();i++){
        freq[s[i]]++;
        if(freq[s[i]]>max_freq) max_freq = freq[s[i]];
    }
    if(max_freq<=(s.length()-max_freq+1))
        return 1;
    return 0;
}
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<coduochem(s)<<endl;
    }
}