#include<bits/stdc++.h>
using namespace std;
int toBase4(string x){
	if(x.compare("00") == 0) return 0;
	if(x.compare("01") == 0) return 1;
	if(x.compare("10") == 0) return 2;
	return 3;
}
string IsDivisible5(string s){
	int l=s.length();
	if(l%2!=0) s='0'+s;
	int tongchan=0,tongle=0;
	int isOddDegit=1;
	for(int i=0;i<s.length();i+=2){
		string t=s.substr(i, 2);
		if(isOddDegit) tongle+=toBase4(t);
		else tongchan+=toBase4(t);
		isOddDegit^=1;
	}
	if(abs(tongchan-tongle)%5==0) return "Yes";
	else return "No";
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<IsDivisible5(s)<<endl; 
	}
}
