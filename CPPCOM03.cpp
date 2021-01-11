#include<bits/stdc++.h>
using namespace std;
int a[100]={0},unused[100],n;
void print(){
	for(int i=1;i<=n;i++)
		cout<<a[i];
	cout<<" ";
}

void xuly(int i){
	for(int j=1;j<=n;j++){
		if(unused[j]){
			a[i]=j;
			unused[j]=0;
			if(i==n)
				print();
			else 
				xuly(i+1);
			unused[j]=1;
		}
	}
	return;
	
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)
			unused[i]=1;
		xuly(1);
		cout<<endl;
	} 
}
