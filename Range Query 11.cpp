#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		int hieu=99999;
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(abs(a[i]-a[j])<hieu)
					hieu=abs(a[i]-a[j]);
			}
		}
		cout<<hieu<<endl;
	}
}
