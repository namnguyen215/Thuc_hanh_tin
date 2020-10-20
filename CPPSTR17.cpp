#include<bits/stdc++.h>
using namespace std;
string substring(string s){
	int n=s.length();
	string a="";
	int b[n+1]={0};
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(s[j]==s[i]){
				b[j]++;b[i]++;
			} 
		}
	}
	for(int i=0;i<n;i++){
		if(b[i]==0) a+=s[i];
	}
	return a;
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<substring(s)<<endl;
	}
}
