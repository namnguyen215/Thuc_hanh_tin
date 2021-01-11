#include <bits/stdc++.h>
using namespace std;

int numdiff(string s, int k)
{
    int res = 0;
    int apb[26];    //mang danh dau su xuat hien cua cac ky tu tu a den z
    //Duyet lan luot tat ca cac xau con
    for (int i = 0; i < s.length(); i++)
    {
        int diff = 0;   //bien dem so ky tu khac nhau
        memset(apb,0, sizeof(apb));
        //duyet tat ca cac xau con trong doan s[i]->s[j]
        for (int j = i; j < s.length(); j++)
        {
            //neu ky tu xuat hien lan dau tien thi tang bien diff
            if (apb[s[j] - 'a'] == 0)   
                diff++;
            apb[s[j] - 'a']++;  //danh dau ky tu vua gap
            if (diff == k)
                res++;
            if (diff > k)
                break;
        }
    }
    return res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        cout << numdiff(s, k) << endl;
    }
}