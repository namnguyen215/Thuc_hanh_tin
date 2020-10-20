#include<bits/stdc++.h>
using namespace std;
int giaithua(int x)
{
	int tich=1;
	for(int i=1;i<=x;i++){
		tich*=i;
	} 
	return tich;
}

int C(int x)
{
	return ((giaithua(2*x))/((giaithua(x))*(giaithua(x+1))));
}

int main(){
	int n;
	cin>>n;
	long Sn=0;
	for(int k=0;k<=n;k++)
		{
			Sn+=C(k)*C(n-k);
		}
	cout<<Sn<<endl;
	
}
