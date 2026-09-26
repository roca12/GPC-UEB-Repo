/*
 * Autor: Jorge Nuñez
 * Problema: Good Schedule
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2230/D
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int c;
    cin >> c;

    for(int i =0 ; i<c;i++) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<int> pa(n + 1, n);
        vector<int> pb(n + 1, n);
        vector<int> dp(n + 1, n);

        long long ans = 0;

        for (int i = n - 1; i >= 0; i--) {

            pa[a[i] - 1] = i;
            pb[b[i] - 1] = i;

            if (a[i] == b[i]) {

                int x = a[i];

                if (pa[x] == pb[x]) {
                    dp[i] = dp[pa[x]];
                } else {
                    dp[i] = min(pa[x], pb[x]);
                }
            }

            if (pa[0] != pb[0]) {
                ans += min(pa[0], pb[0]) - i;
            } else {
                ans += dp[pa[0]] - i;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
