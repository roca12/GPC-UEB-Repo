/*
 * Autor: Miguel Lopez
 * Problema: Infinity Gaunlet
 * Juez online: CodeForces
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/CodeForces-987A
 */

// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i = 6;
    map<string, string> gems;
        gems["purple"]= "Power";
        gems["green"] = "Time";
        gems["blue"] = "Space";
        gems["orange"] = "Soul";
        gems["red"] = "Reality";
        gems["yellow"] = "Mind";
	int t; cin >> t;

    while(t--) {
        string c; cin >> c;
        gems.erase(c);
    }
            cout << gems.size() << endl;
        for(auto[col, val]: gems) {
            cout << val << endl;
        }
}
