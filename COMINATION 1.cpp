#include<iostream>
#include<string>
using namespace std;
bool ok=true;
void sinh(string &s,int n){
	int i;
	for(i=n-1;i>=0;i--){
		if(s[i]=='0'){
			s[i]='1';
			break;
		}
		else s[i]='0';
	}
	if(i<0) ok=false;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s="";
		for(int i=0;i<n;i++) s+='0';
		cout<<s<<" ";
		ok=true;
		while(ok){
			sinh(s,n);
			if(ok)	cout<<s<<" ";
		}
		cout<<endl;
	}
}
