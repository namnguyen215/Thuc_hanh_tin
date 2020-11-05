#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
    int cnt=1;
	for(int j=1;j<=t;j++)
	{
		long long n;
		cin>>n;
		long a[10000]={0};
		for(long long i=2;i<=sqrt(n);i++)
		{
			while(n%i==0)
			{
				a[i]++;
				n=n/i;
			}
		}
		if(n!=1)
			{
				a[n]++;
			}
        cout<<"Test "<<cnt<<": ";
		for(int i=0;i<10000;i++)
		{
			if(a[i]!=0){
                cout<<" "<<i<<"("<<a[i]<<")"<<" ";
            } 
		}
		cout<<endl;
        cnt++;
    }
}
