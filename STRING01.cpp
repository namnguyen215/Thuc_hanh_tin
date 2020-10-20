#include<bits/stdc++.h>
using namespace std;
vector<string> vt;

void tachchuoi(string s)
{
	s+='@';
	string a="";
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==' '||s[i]=='@'){
			vt.push_back(a);
			a.clear();
		} 
		else{
			a.push_back(s[i]);
		}
	}
}
int main(){
	string s,s1;
	getline(cin,s);
	cin>>s1;
	tachchuoi(s);
	for(int i=0;i<vt.size();i++){
		if(vt[i]!=s1) cout<<vt[i]<<" ";
	}
}
