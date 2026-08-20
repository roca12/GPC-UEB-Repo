/*
 * Autor: OtherSpanish
 * Problema: Editor
 * Juez online: UVA
 * Veredicto: Accepted
 * URL: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=3664&mosmsg=Submission+received+with+ID+31261505
 */
 

#include <bits/stdc++.h>
using namespace std;

vector<int> buildSuffixArray(const string &s) {
    int n = s.size();
    vector<int> sa(n), rnk(n), tmp(n);
    for (int i = 0; i < n; i++) { sa[i] = i; rnk[i] = s[i]; }

    for (int k = 1; k < n; k <<= 1) {
        auto cmp = [&](int a, int b) {
            if (rnk[a] != rnk[b]) return rnk[a] < rnk[b];
            int ra = a + k < n ? rnk[a + k] : -1;
            int rb = b + k < n ? rnk[b + k] : -1;
            return ra < rb;
        };
        sort(sa.begin(), sa.end(), cmp);

        tmp[sa[0]] = 0;
        for (int i = 1; i < n; i++) {
            tmp[sa[i]] = tmp[sa[i - 1]] + (cmp(sa[i - 1], sa[i]) ? 1 : 0);
        }
        rnk = tmp;

        if (rnk[sa[n - 1]] == n - 1) break;
    }
    return sa;
}

vector<int> buildLCPArray(const string &s, const vector<int> &sa) {
    int n = s.size();
    vector<int> rnk(n), lcp(n, 0);
    for (int i = 0; i < n; i++) rnk[sa[i]] = i;

    int h = 0;
    for (int i = 0; i < n; i++) {
        if (rnk[i] > 0) {
            int j = sa[rnk[i] - 1];
            while (i + h < n && j + h < n && s[i + h] == s[j + h]) h++;
            lcp[rnk[i]] = h;
            if (h > 0) h--;
        } else {
            h = 0;
        }
    }
    return lcp;
}

int longestRepeatedSubstringLength(const string &s) {
    int n = s.size();
    if (n == 0) return 0;

    vector<int> sa = buildSuffixArray(s);
    vector<int> lcp = buildLCPArray(s, sa);

    int mx = 0;
    for (int v : lcp) mx = max(mx, v);
    return mx;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    cin.ignore();

    while (T--) {
        string s;
        getline(cin, s);
        cout << longestRepeatedSubstringLength(s) << "\n";
    }

    return 0;
}
