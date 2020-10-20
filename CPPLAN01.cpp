#include<bits/stdc++.h>
using namespace std;
int cd(char x){
    return x-'0';
}
string result(string a,string b){
    int n1=a.length(),n2=b.length();
    string res="";
    //Them so 0;
    for(int i=0;i<n1-n2;i++) b+='0';
    int nho=0;
    for(int i=0;i<n1;i++){
        if(cd(a[i])-cd(b[i])-nho>=0){
            res+=char(cd(a[i])-cd(b[i])-nho+'0');
            nho=0;
        }
        else{
            res+=char (cd(a[i])+10-cd(b[i])-nho+'0');
            nho=1;
        }
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    int t;cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        if((a.length()==b.length())&&(a<b)) swap(a,b);
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        if(a.length()<b.length()) swap(a,b);

        cout<<result(a,b)<<endl;
    }
}
