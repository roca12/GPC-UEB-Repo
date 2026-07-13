/*
 * Autor: OtherSpanish
 * Problema: Traffic Lights
 * Juez online: CSES
 * Veredicto: Accepted
 * URL: https://cses.fi/problemset/stats/1163/
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x;
    int n;
    cin >> x >> n;

    set<long long> positions;
    positions.insert(0);
    positions.insert(x);

    multiset<long long> gaps;
    gaps.insert(x);

    string out;
    out.reserve(n * 7);
    for (int i = 0; i < n; i++) {
        long long p;
        cin >> p;

        auto hiIt = positions.lower_bound(p);
        long long hi = *hiIt;
        auto loIt = prev(hiIt);
        long long lo = *loIt;

        gaps.erase(gaps.find(hi - lo));

        positions.insert(p);

        gaps.insert(p - lo);
        gaps.insert(hi - p);

        out += to_string(*gaps.rbegin());
        out += '\n';
    }

    cout << out;
    return 0;
}
