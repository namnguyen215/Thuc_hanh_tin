#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long x;
	    vector<long long> a,b;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x==0) b.push_back(x);
			else a.push_back(x);
		}
		for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
		for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
		cout<<endl;
	}
}
