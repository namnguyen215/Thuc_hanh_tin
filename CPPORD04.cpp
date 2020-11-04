#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, a[100000], x, sum=0, sum1=0, sum2=0;
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sum1 = a[0];
        for(int i = 1; i < n; i++){
            sum = sum1;
            sum1 = sum2 + a[i];
            if(sum2 < sum) sum2 = sum;
        }
        if(sum1 < sum2) cout << sum2 << endl;
        else cout << sum1 << endl;
    }
    return 0;
}