/*
 * Autor: Jorge Nuñez
 * Problema: Remove Duplicates
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/978/A
 */
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define all(x) (x).begin(), (x).end()

const ll MOD = 1e9 + 7;
const int INF = 1e9;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

     int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
        cin >> a[i];

    set<int> s;
    vector<int> ans;

    for (int i = n - 1; i >= 0; i--) {
        if (s.count(a[i]) == 0) {
            s.insert(a[i]);
            ans.push_back(a[i]);
        }
    }

    reverse(all(ans));


    cout << ans.size() << endl;

    for (int x : ans)
        cout << x << " ";

    return 0;
}
