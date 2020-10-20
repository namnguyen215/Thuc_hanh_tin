#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n1,n2;
        cin>>n1>>n2;
		int a1[n1],a2[n2];
		for(int i=0;i<n1;i++) cin>>a1[i];
		for(int j=0;j<n2;j++) cin>>a2[j];
		sort(a1,a1+n1);
		int x=a1[0]-1;
		for(int i=0;i<n2;i++){
			for(int j=0;j<n1;j++){
				if(a2[i]==a1[j]){
					cout<<a1[j]<<" ";
					a1[j]=x;
				} 
				if(a2[i]<a1[j]) break;
			}
			
		}
		for(int i=0;i<n1;i++){
			if(a1[i]!=x) cout<<a1[i]<<" ";
		}
		cout<<endl; 
	}
}
