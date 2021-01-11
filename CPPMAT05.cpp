#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 1][n + 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        int maxv = INT_MIN;
        int hang[n], cot[n];
        int tongh = 0, tongc = 0;
        //tinh tong max cua hang,cot
        for (int i = 0; i < n; i++)
        {
            tongh = 0;
            tongc = 0;
            for (int j = 0; j < n; j++)
            {
                tongh += a[i][j];
                tongc += a[j][i];
            }
            hang[i] = tongh;
            cot[i] = tongc;
            tongh = max(tongh, tongc);
            if (tongh > maxv)
                maxv = tongh;
        }
        int reshang = 0, rescot = 0;
        for (int i = 0; i < n; i++)
        {
            reshang += maxv - hang[i];
            rescot += maxv - cot[i];
        }
        int maxres = max(reshang, rescot);
        cout << maxres << endl;
    }
}