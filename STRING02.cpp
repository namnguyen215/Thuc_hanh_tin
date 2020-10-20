#include<bits/stdc++.h>
using namespace std;
string ten(string s){
	string a="";
	stack<char> st;
	for(int i=s.length()-1;s[i]!=' ';i--)
	{
		st.push(s[i]);
	}
	while(!st.empty()){
		a+=st.top();
		st.pop();
	}
return a;
}
string ho(string s)
{
	string a="";
	for(int i=0;i<s.length();i++){
		if(i==0||s[i-1]==' ')
			a+=s[i];
	}
	string b="";
	for(int i=0;i<a.length()-1;i++){ 
		b+=a[i];
	}
	return b;
}

int main(){
	string s,result="";
	getline(cin,s);
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	result+=ten(s)+ho(s)+"@ptit.edu.vn";
	cout<<result;
}
