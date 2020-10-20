#include<iostream>

using namespace std;

int mu(long long a, long long b, long long m){
    if(b == 1) return a;
    else{
        long long x = mu(a, b/2, m);
        if(b % 2 == 0) return x % m * x % m;
        else return x % m * x % m * a % m;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string a;
        long long b, m, sum=0;
        cin >> a >> b >> m;
        for(int i = 0; i < a.size(); i++){
            int x = a[i] - '0';
            sum = (sum * 10 % m + x% m)%m;
        }
        cout << mu(sum, b, m) << endl;
    }
    return 0;
}
