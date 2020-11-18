#include<bits/stdc++.h>
using namespace std;
string nhan(string s1, string s2){
    vector<int> vt(s1.length()+s2.length(),0);
    int idx1=0,idx2=0;  //2 chi so de luu vi tri trong ket qua
    if(s1.length()==0 || s2.length()==0)
        return "0";
    // neu do dai s1 hoac s2 bang 0 thi tra ve 0
    for(int i=s1.length()-1;i>=0;i--)   //duyet tu dau den cuoi s1
    {
        int nho=0;
        int n1=s1[i]-'0';   //n1 la phan tu s1 dang xet
        idx2=0;
        for(int j=s2.length()-1;j>=0;j--){
            int n2=s2[j]-'0';   //phan tu s2 dang xet
            int sum=n1*n2 + vt[idx1+idx2]+nho;
            nho=sum/10;
            vt[idx1+idx2]=sum%10;
            idx2++;
        }
        if(nho>0)
            vt[idx1+idx2] +=nho;
        idx1++;
    }
    int i=vt.size()-1;
    while(i>=0&&vt[i]==0)   i--;
    if(i==-1) return "0";
    string s="";
    while(i>=0)
        s+=vt[i--]+'0';
    return s;

}
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        cout<<nhan(s1,s2)<<endl;
    }
}