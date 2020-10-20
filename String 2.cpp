#include<bits/stdc++.h>
using namespace std;
int check(string s){
	int le=0,chan=0;
	for(int i=0;i<s.length();i++){
		if(i%2==0) chan+=s[i]-'0';
		else le+=s[i]-'0';
	}
	if(abs(le-chan)%11==0) return 1;
	else return 0;
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<check(s)<<endl;
	}
}
