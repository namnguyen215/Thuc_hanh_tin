#include<bits/stdc++.h>
using namespace std;
int substring(string s){
	int dem=0,n=s.length();
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(s[j]==s[i]) dem++;
		}
	}
	return dem;
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<s.length()+substring(s)<<endl;
	}
}
