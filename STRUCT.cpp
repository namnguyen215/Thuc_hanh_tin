#include<iostream>
#include<algorithm>
using namespace std;
struct sinhvien{
	string MaSV;
	string HoTen;
	string Lop;
	float diemTHCS2;
	float diemCpp,dtb;
};
void nhap(sinhvien sv[],int n){
	for(int i=0;i<n;i++){
		cout<<"Nhap SV thu "<<i+1<<endl;
		cin>>sv[i].diemTHCS2>>sv[i].diemCpp;
		cin.ignore();
		getline(cin,sv[i].MaSV);
		getline(cin,sv[i].HoTen);
		getline(cin,sv[i].Lop);
	}
}
void xuatCpp(sinhvien sv[],int n){
	for(int i=0;i<n;i++){
		if(sv[i].diemCpp>=7.0) cout<<sv[i].HoTen<<endl;
	}
}
void xuat(sinhvien sv[],int n){
	for(int i=0;i<n;i++){
		cout<<"SV thu "<<i+1<<":"<<endl;
		cout<<sv[i].HoTen<<endl;
	}
}
bool dk(sinhvien a,sinhvien b){
	return a.dtb>b.dtb;
}
bool cpname(sinhvien a,sinhvien b){
	return a.HoTen<b.HoTen;
}
int main(){
	int n;cin>>n;
	sinhvien sv[n+2];
	nhap(sv,n);
	xuatCpp(sv,n);
	cout<<"Sap xep theo ten"<<endl;
	sort(sv,sv+n,cpname);
	xuat(sv,n);
	for(int i=0;i<n;i++){
		sv[i].dtb=(sv[i].diemCpp+sv[i].diemTHCS2)/2;
	}
	cout<<"Sap xep theo dtb"<<endl;
	sort(sv,sv+n,dk);
	xuat(sv,n);
}
