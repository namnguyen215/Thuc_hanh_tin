#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int n, X[100], a[100][100], kq=1e9, t=1;
bool cauhinhcuoi=false;

void sinh()
{
	int i=n-1;
	while((i>0) && X[i]>X[i+1]) i--;
	if(i==0)
	{
		cauhinhcuoi=true;
		return;
	}
	int k=n;
	while(X[k]<X[i]) k--;
	int tmp=X[i]; X[i]=X[k]; X[k]=tmp;
	int l=i+1, r=n;
	while(l<=r)
	{
		int tmp=X[l]; X[l]=X[r]; X[r]=tmp;
		l++; r--;
	}
}

void Update()
{
	int ans=0;
	for(int i=1; i<=n; i++) ans+=a[i][X[i]];
	if(ans<kq) kq=ans;
}

void print()
{
	int ans=0;
	for(int i=1; i<=n; i++) ans+=a[i][X[i]];
	if(ans==kq)
	{
		cout<<"Lua chon "<<t<<endl;
		t++;
		for(int i=1; i<=n; i++) cout<<"N"<<i<<"->v"<<X[i]<<' ';
		cout<<endl;
	}
}
int main()
{
	cout<<"So nguoi 😊 so viec): "; cin>>n;
	cout<<"Ma tran chi phi thoi gian: "<<endl;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			cin>>a[i][j];
		}
	}
	for(int i=1; i<=n; i++) X[i]=i;
	while(!cauhinhcuoi)
	{
		Update();
		sinh();
	}
	cout<<"Thoi gian it nhat thuc hien "<<n<<" viec: "<<kq<<endl;
	for(int i=1; i<=n; i++) X[i]=i;
	cauhinhcuoi=false;
	while(!cauhinhcuoi)
	{
		print();
		sinh();
	}
	return 0;
}