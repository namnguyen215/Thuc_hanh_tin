#include<bits/stdc++.h>
using namespace std;
string smallestcommon(string s1,string s2){
    if(s1.length()<s2.length()) return "-1";
    int hash_s2[256] ={0};
    int hash_s1[256]={0};
    for(int i=0;i<s2.length();i++)
        hash_s2[s2[i]]++;
    int start=0, start_index=-1,min_len=INT_MAX;
    int count=0;
    for(int j=0;j<s1.length();j++)
    {
        hash_s1[s1[j]]++;
        if(hash_s2[s1[j]]!=0 && hash_s1[s1[j]] <= hash_s2[s1[j]])
            count++;
        if(count == s2.length()){
            while(hash_s1[s1[start]] > hash_s2[s1[start]] || hash_s2[s1[start]]==0)
            {
                if(hash_s1[s1[start]] > hash_s2[s1[start]])
                    hash_s1[s1[start]] --;
                start++;
            }
            int len_wd=j-start+1;
            if(min_len>len_wd)
            {
                min_len=len_wd;
                start_index=start;
            }
        }
    }
    if(start_index==-1) return "-1";
    return s1.substr(start_index,min_len);
}

int main(){
    int t;cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<smallestcommon(s1,s2)<<endl;
    }
}