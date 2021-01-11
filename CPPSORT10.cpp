#include<bits/stdc++.h>
using namespace std;
int so(char x){
    return (int) x-'0';
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;
        int a[11];
        for(int i=0;i<=9;i++)   a[i]=0;
        for(int i=0;i<n;i++)
        {
            cin>>s;
            for(int i=0;i<s.length();i++)
                a[so(s[i])]++;
        }
        for(int i=0;i<=9;i++){
            if(a[i]!=0)
                cout<<i<<" ";
        }
        cout<<endl;
    }
}