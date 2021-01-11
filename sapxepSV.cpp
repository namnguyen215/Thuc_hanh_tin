#include<bits/stdc++.h>
using namespace std;
struct SV{
    string ten;
    int sobai,tong;
};
bool dk2(SV a,SV b){
    if(a.ten<b.ten) return true;
    return false;
}
bool dk1(SV a,SV b){
    if(a.sobai<b.sobai) return true;
    else if(a.sobai==b.sobai){
        if(dk2(a,b)) return true;
        else return false;
    }
    return false;
}

int main(){
    int n;cin>>n;
    SV sv[n];

    for(int i=0;i<n;i++){
    	cin.ignore();
        getline(cin,sv[i].ten);
        cin>>sv[i].sobai>>sv[i].tong;
    }
    sort(sv,sv+n,dk1);
    for(int i=0;i<n;i++)
        cout<<sv[i].ten<<endl;
    
}
