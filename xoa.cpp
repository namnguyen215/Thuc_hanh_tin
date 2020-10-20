#include<iostream>
#include<vector>
using namespace std;
bool isPrime(int x){
    if(x==0||x==1) return false;
    for(int i=2;i*i<=x;i++){
        if(x%i==0) return false;
    }
    return true;
}
int quarantinedPrimes(int l, int r)
{
    int dem=0;
    vector<int> vt;
    for(int i=l-10;i<=r+10;i++){
        if(isPrime(i)){
                vt.push_back(i);
        }
    }
    if(vt[0]>=l && (vt[1]-vt[0]>=10)) dem++;
    if(vt[size()-1]>=r && (vt[vt.size()-1]-vt[vt.size()-2]>=10)) dem++;
    for(int i=1;i<vt.size()-1;i++){
        if((vt[i+1]-vt[i]>=10)&&(vt[i]-vt[i-1]>=10)) dem++;
    }
    return dem;
}
int main()
{
   cout<< quarantinedPrimes(1,500);
}