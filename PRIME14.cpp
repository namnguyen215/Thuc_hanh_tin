#include<bits/stdc++.h>
using namespace std;
long a[1000]={0};
void sangnt()
{
	a[0]=1;a[1]=1;
	for(int i=2;i<=1000;i++)
	{
		if(a[i]==0)
			{
				for(int j=i*2;j<=1000;j+=i)
					{
						a[j]=1;
					}
			}
	}	
}

int main(){
	sangnt();
	int t;
	cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int> vt;
		for(int i=2;i*i<=n;i++){
			if(a[i]==0) cout<<i*i<<" ";
		}
		cout<<endl;
	}
}
