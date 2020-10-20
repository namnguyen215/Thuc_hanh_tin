#include<bits/stdc++.h>
using namespace std;
string xuly(string s,int n){
	int nodigit=n;
	int freq[10]={0};
	for(int i=0;i<nodigit;i++){
		if(s[i]=='1'
			||s[i]=='2'
			||s[i]=='3'
			||s[i]=='5'
			||s[i]=='7'){
				freq[s[i]-48]+=1;
		}
		else if(s[i]=='4'){
			freq[3]++;freq[2]+=2;
		}
		else if(s[i]=='6'){
			freq[5]++;freq[3]++;
		}
		else if(s[i]=='8'){
			freq[7]++;freq[2]+=3;
		}
		else if(s[i]=='9'){
			freq[7]++;freq[3]+=2;freq[2]++;
		}
	}
	string t="";
	if(freq[0]==nodigit||freq[1]==nodigit||freq[0]+freq[1]==nodigit) return s;
	else {
		for(int i=9;i>=2;i--){
			int z=freq[i];
			while(z--){
				t+=(char)(i+48);
			}
		}
		return t;	
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		int n;
		cin>>n>>s;
		cout<<xuly(s,n)<<endl;
	}
}
