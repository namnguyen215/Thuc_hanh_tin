#include<bits/stdc++.h>
using namespace std;
void substring(string s){
	int start=0;
	for(int end=0;end<s.length();end++){
		if(s[end]==' '){
			reverse(s.begin()+start,s.begin()+end);
			start=end+1;
		} 
	}
	reverse(s.begin()+start,s.end());
	reverse(s.begin(),s.end());
	cout<<s<<endl;
}
int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		substring(s);
	}
}
