#include<bits/stdc++.h>
using namespace std;
void findSmallest(int m,int s){
	if(s==0){
		if(m==1) cout<<"0 ";
		else cout<<"-1 "; 
		return;
	}
	if(s>9*m){
		 cout<<"-1 ";
		 return;
	}
	int res[m];
	s-=1;
	for(int i=m-1;i>0;i--){
		if(s>9){
			res[i]=9;
			s-=9;
		}
		else{
			res[i]=s;
			s=0;	
		}
	}
	res[0]=s+1;
	for(int i=0;i<m;i++) cout<<res[i];
	cout<<" ";
}
void  findLargest(int m,int s){
	if(s==0){
		if(m==1) cout<<"0";
		else cout<<"-1";
		return;
	}
	if(s>9*m){
		 cout<<"-1";
		 return;
	}
	int res[m];
	for(int i=0;i<m;i++){
		if(s>9){
			res[i]=9;
			s-=9;
		}
		else{
			res[i]=s;
			s=0;
		}
	}
	for(int i=0;i<m;i++) cout<<res[i];
	cout<<endl;
}
int main(){
	int m,s;
	cin>>m>>s;
	findSmallest(m,s);
	findLargest(m,s);
}
