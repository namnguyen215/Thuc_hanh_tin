#include<bits/stdc++.h>
using namespace std;
void lwr(string &s){
	for(int i=0;i<s.length();i++){
		if(s[i]>='A'&&s[i]<='Z') s[i]+=32;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s; 
		cin>>s;
		lwr(s);
		int k;cin>>k;
		char a[26];
		int l=0,dem=0;
		for(char i='a';i<='z';i++){
			a[l]=i;
			l++;
		}
		if(s.length()<24){
			cout<<"0"<<endl;
			return 0;
		}
		for(int i=0;i<s.length();i++){
			for(int j=0;j<l;j++){
				if(s[i]==a[j]) a[j]='@';
			}
		}
		for(int i=0;i<l;i++){
			if(a[i]!='@') dem++;
		}
		if(dem<=k) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}


