#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        int tong=0;
        vector<char> vt;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                tong+= int(s[i]-'0');
            }
            else
                vt.push_back(s[i]);
        }
        sort(vt.begin(),vt.end());
        for(int i=0;i<vt.size();i++)
            cout<<vt[i];
        cout<<tong<<endl;
    }
}
