#include<bits/stdc++.h>
using namespace std;
bool nt(int i)
{
	if(i==0||i==1) return false;
	for(int j=2;j<=sqrt(i);j++) 
	{
		if(i%j==0) return false;
	}
	return true;
}
int main(){
	int a,b;
	cin>>a>>b;
	int c=min(a,b),d=max(a,b);
	for(int i=c;i<=d;i++){
		if(nt(i)) cout<<i<<" ";
	}
}
