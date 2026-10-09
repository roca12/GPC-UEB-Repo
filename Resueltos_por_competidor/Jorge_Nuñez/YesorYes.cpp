/*
 * Autor: Jorge Nuñez
 * Problema: Yes or Yes
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2178/A
 */

#include <bits/stdc++.h>
#define ln "\n"
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll , ll>>
#define dbg(x) cerr << x << " <-----" << "DEBUG" << ln;
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define add(x) push_back(x)
const int INF = 1e9;
int main() {
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int c;
    cin >> c;

    while (c--) {
        string s;
        cin >> s;

        vector<char> v(all(s));

        int y = 0;

        for (int i = 0; i < v.size(); i++) {
            if (v[i] == 'Y') {
                y++;
            }
        }

        if (y <= 1) {
            cout << "YES"<<ln;
        } else {
            cout << "NO"<<ln;
        }
    }

    

}