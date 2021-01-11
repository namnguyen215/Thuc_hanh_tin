#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int a[n][n];      
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
                cin>>a[i][j];
        }
		int dem=0;
		unordered_map<int,int> map;
		for(int i=0;i<n;i++)
			map[a[0][i]]=1;
		for(int i=1;i<n;i++){
			for(int j=0;j<n;j++){
				if(map[a[i][j]]==i){
					map[a[i][j]]=i+1;
					if(i==n-1){
						dem++;
					}					
				}
			}
		}
		cout<<dem<<endl;
    }
}
