<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;
int r,c,a[105][105];
void slove(int n,int m){
	int dong=0,cot=0;
	while(dong<n && cot<m){
		if(dong+1==n && cot+1==m) break;
		for(int i=cot;i<m;i++) cout<<a[dong][i]<<" ";
		dong++;
		for(int i=dong;i<=n-1;i++) cout<<a[i][m-1]<<" ";
		m--;
		if(dong<n){
			for(int i=m-1;i>=cot;i--) cout<<a[n-1][i]<<" ";
		}
		n--;
		if(cot<m){
			for(int i=n-1;i>=dong;i--) cout<<a[i][cot]<<" ";
		}
		cot++;
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>r>>c;
		int n=r,m=c;
		for(int i=0;i<r;i++){
			for(int j=0;j<c;j++){
				cin>>a[i][j];
			}
		}
		slove(n,m);
	}
}
=======
#include<bits/stdc++.h>
using namespace std;
long long a[100][100];
int main(){
    int t;cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int hang=n,cot=m,k=1,p=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++) cin>>a[i][j];
        while(p<m*n){
            for(int i=p;i<cot;i++){
                cout<<a[p][i]<<" ";
            } 
            for(int i=p+1;i<hang;i++){
                cout<<a[i][cot-1]<<" ";
            } 
            if(p!=hang-1)
                for(int i=cot-2;i>=p;i--){
                    cout<<a[hang-1][i]<<" ";
                } 
            if(p!=cot-1)
                for(int i=hang-2;i>p;i--){
                    cout<<a[i][p]<<" ";
                } 
            p++;hang--;cot--;
        }
        cout<<endl;
    }
    
}
>>>>>>> f3494e339c82b6436c2cdcc83960f46fc0884353
