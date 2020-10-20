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
			if(a.length()==0) s[i]-=32;
			a.push_back(s[i]);
		}
	}
}
string ten(string s){
	string a="";
	stack<char> st;
	for(int i=s.length()-1;s[i]!=' ';i--)
	{
		st.push(s[i]);
	}
	st.top()-=32;
	while(!st.empty()){
		a+=st.top();
		st.pop();
	}
	
return a;
}
int main(){
	string s,s1;
	getline(cin,s);
	transform(s.begin(), s.end(), s.begin(), ::tolower); 
	for(int i=0;i<s.length();i++){
		if(s[i]==' '&&s[i-1]==' '){
			s.erase(s.begin()+i);	
			i--;
		} 
	}
	tachchuoi(s);
	s1=ten(s);
	for(int i=0;i<vt.size()-1;i++){
		cout<<vt[i];
		if(i!=vt.size()-2) cout<<" ";
	}
	transform(s1.begin(),s1.end(),s1.begin(), ::toupper);
	cout<<", "<<s1;
}
