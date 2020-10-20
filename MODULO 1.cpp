#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long x,y;
		long long p,a=1;
		cin>>x>>y>>p;
		for(int i=1;i<=y;i++){
			a=((a%p)*(x%p))%p;
		}
		cout<<a%p<<endl;
	}
}
