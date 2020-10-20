#include<bits/stdc++.h>
using namespace std;
int check(string s){
	int x;
	(s[s.length()-1]=='6'&&s[s.length()-2]=='8') ? x=1 : x=0;
	return x;
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<check(s)<<endl;
	}
}
