/*
 * Autor: Miguel Lopez
 * Problema: Anton and Polyhedrons
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/785/A
 */

#include <bits/stdc++.h>
#include <cctype>
#include <cstdio>
#include <ios>
#include <ostream>
typedef long long int ll;
using namespace std;
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
    int n; cin >> n;
    map<string, int> faces = {{"Tetrahedron", 4},{"Cube", 6},{"Octahedron", 8},{"Dodecahedron", 12}, {"Icosahedron", 20}};
    ll total = 0;
    string s;
    while(n--) {
        cin >> s; total += faces[s];
    }

    cout << total << endl;
}
