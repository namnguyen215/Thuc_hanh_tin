#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

string s[1000000];


int main(){
    int t;
    cin >> t;
    while(t--){
        int kq, x, nho=0, m=0, k=0, kq1=0, nho1=0, n=0;
        string s1, s2, a="";
        for(int i = 0; i < 1000000; i++)
            s[i] = "";
        cin >> s1 >> s2;
        if(s1.size() < s2.size()) swap(s1, s2);
        for(int i = s2.size()-1; i >= 0; i--){
            nho = 0;
            for(int j = s1.size()-1; j >= 0; j--){
                kq = (s2[i] - '0') * (s1[j] - '0') + nho;
                nho = kq/10;
                s[m].push_back(kq % 10 + '0');
            }
            m++;
            if(nho != 0) s[m-1].push_back(nho + '0');
        }
        for(int i = 0; i < m; i++){
            reverse(s[i].begin(), s[i].end());
            s[i].insert(s[i].size(), i, '0');
            if(k < s[i].size()) k = s[i].size();
        }
        for(int i = 0; i < m; i++)
            if(s[i].size() != k) s[i].insert(0, k-s[i].size(), '0');
//        for(int i = 0; i < m; i++)
//            cout << s[i] << endl;
        for(int i = s[0].size()-1; i >= 0; i--){
            kq1 = 0;
            for(int j = 0; j < m; j++){
                kq1 += (s[j].at(i) - '0');
            }
            kq1 += nho1;
            nho1 = kq1/10;
            a.push_back(kq1 % 10 + '0');
        }
        n = a.size();
        if(nho1 != 0) a.push_back(nho1 + '0');
        else n -= 1;
        for(int i = n; i >= 0; i--){
            cout << a[i];
        }
        cout << endl;
    }
    return 0;
}