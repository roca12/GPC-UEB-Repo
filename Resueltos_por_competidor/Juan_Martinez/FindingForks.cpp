/*
 * Autor: EroMergeSort
 * Problema: Finding Forks
 * Juez online: Kattis
 * Veredicto: Accepted
 * Url:http://open.kattis.com/problems/findingforks
 */

// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    vector<int> count;
    while(t--) {
        int n; cin >> n;
        count.push_back(n);
    }
    sort(count.begin(), count.end());
    int a = count[0] + count[1];
    cout << a << endl;
}
