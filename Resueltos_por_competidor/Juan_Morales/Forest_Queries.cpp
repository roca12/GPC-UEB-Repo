/*
 * Autor: OtherSpanish
 * Problema: Forest Queries
 * Juez online: CSES
 * Veredicto: Accepted
 * URL: https://cses.fi/problemset/result/18432349/
 */
 
 #include <bits/stdc++.h>
typedef long long ll;

using namespace std;

struct PrefixSum2D
{
    vector<vector<long long>> pref;
    int n, m;

    PrefixSum2D(vector<vector<long long>>& a)
    {
        n = a.size();
        m = a[0].size();
        pref.assign(n + 1, vector<long long>(m + 1, 0));

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                pref[i + 1][j + 1] = a[i][j] + pref[i][j + 1]
                                     + pref[i + 1][j] - pref[i][j
                                                               ];
    } // O(n * m)

    long long rango(int x1, int y1, int x2, int y2)
    {
        return pref[x2 + 1][y2 + 1] - pref[x1][y2 + 1]
               - pref[x2 + 1][y1] + pref[x1][y1];
    } // O(1)
};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin>>n>>q;

    vector<vector<ll>> matr(n + 1, vector<ll>(n + 1, 0));

    for(int i = 1; i<=n; ++i)
    {
        string line;
        cin>>line;
        for(int j = 1; j<=n; ++j)
            matr[i][j] = (line.at(j-1) == '*') ? 1 : 0;
    }

    PrefixSum2D ps(matr);

    for(int j = 0; j<q; ++j)
    {
        int y1, x1, y2,x2;
        cin>>y1>>x1>>y2>>x2;
        cout<<ps.rango(y1,x1,y2,x2)<<"\n";
    }
    return 0;
}
