/*
 * Autor: Miguel Lopez
 * Problema: The Best Card
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2253/problem/A
 */
#include <bits/stdc++.h>
#include <cctype>
#include <cstdio>
#include <ios>
#include <ostream>
typedef long long int ll;
using namespace std;

const int MAXN = 200002;
vector<int> spf(MAXN);   // menor factor primo de cada numero
vector<int> primos;

void sieve() {
    for (int i = 2; i < MAXN; i++) {
        if (spf[i] == 0) {
            spf[i] = i;
            primos.push_back(i);
        }
        for (int p : primos) {
            if (p > spf[i] || (ll)i * p >= MAXN) break;
            spf[i * p] = p;
        }
    }
}

void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main() {
    init_code();
    sieve();
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int x = n + 1;
        cout << ((spf[x] == x) ? "YES" : "NO") << "\n";
    }
}
