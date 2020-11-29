
#include<bits/stdc++.h>
using namespace std; 
long long add(long long a, long long b, long long c)
{ 
    if (b==0) return 0; 
    int tmp= add(a,b/2,c); 
    if(b%2==1)
        return (a%c+2*(tmp%c)) % c;
    else
    {
        return (2*(tmp%c))%c;
    }
    
    
} 

int main(){ 
    int t; cin>>t; 
    while(t--){ 
        long long a,b,c; 
        cin>>a>>b>>c; 
        cout<<add(a,b,c)<<endl; 
    } 
    return 0; 
}

