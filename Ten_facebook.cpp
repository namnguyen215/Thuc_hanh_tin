#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        s=' '+s+' ';
        for(int i=0;i<s.length  ();i++){
            if(s[i]>='A'&&s[i]<='Z')
                s[i]+=32;
        }
        string ho,ten,a;
        for(int i=1;i<s[i];i++){
            if(s[i]==' '){
                ho=a;              
                ho[0]-=32;   
                a=""; 
				break;         
            }
            else 
                a+=s[i];
        }
        for(int i=s.length()-2;i>=0;i--){
            if(s[i]==' '){
                reverse(a.begin(),a.end());
                ten=a;        
                ten[0]-=32;
                break;         
            }
 
            else 
                a+=s[i];
        }
        if(ten==ho)
        	cout<<ten<<endl;
        else 
        	cout<<ten<<" "<<ho<<endl;
    }
}
