#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    cin.ignore();
    while(t--){
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);
        s1+='#';s2+='#';
        vector<string> vt1,vt2,vt;
        string a="";
        for(int i=0;i<s1.length();i++){
            if(s1[i]==' '||i==s1.length()-1){
                vt1.push_back(a);
                a="";
            }
            else a+=s1[i];
        }
        for(int i=0;i<s2.length();i++){
            if(s2[i]==' '||i==s2.length()-1){
                vt2.push_back(a);
                a="";
            }
            else a+=s2[i];
        }
        
        for(int i=0;i<vt2.size();i++){
            for(int j=0;j<vt1.size();j++){
                if(vt1[j]==vt2[i])
                    vt1[j]="@";
            }
        }
        for(int i=0;i<vt1.size();i++)
            if(vt1[i] != "@")
				vt.push_back(vt1[i]);
		sort(vt.begin(),vt.end());
		vt.push_back("namdz");
		for(int i=0;i<vt.size()-1;i++) 
			if(vt[i]!=vt[i+1])		
				cout<<vt[i]<<" ";
        cout<<endl;
    }
}
