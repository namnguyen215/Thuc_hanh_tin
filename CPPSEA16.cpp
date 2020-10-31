#include<bits/stdc++.h>
using namespace std;
void common(long long a[],long long b[],long long c[],long n1,long n2,long n3){
    int i=0,j=0,k=0;
    bool check=false;
    while(i<n1 && j<n2 && k<n3){
        if(a[i]==b[j]&&b[j]==c[k]){
            cout << a[i] << " ";
            check=true;
            i++;j++;k++;
        }
        else if(a[i]<b[j])
            i++;
        else if(b[j]<c[k])
            j++;
        else k++;
    }
    if(check==false) cout<<-1;
}
int main(){
    int t;cin>>t;
    while(t--){
        long n1,n2,n3;
        cin>>n1>>n2>>n3;
        long long a[n1],b[n2],c[n3];
        for(long i=0;i<n1;i++)   cin>>a[i];
        for(long i=0;i<n2;i++)   cin>>b[i];
        for(long i=0;i<n3;i++)   cin>>c[i];       
        common(a,b,c,n1,n2,n3);
        cout<<endl;
   }
}