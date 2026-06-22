#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
	 * Autor: mariana
	 * Problema : Soldier and Badges
	 * Juez online: codeforces
	 * Veredicto: Accepted
	 * URL: https://codeforces.com/contest/546/problem/B
	 */
int main() {
    int n;
    cin >> n;

    vector<long long> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long ans = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] <= a[i - 1]) {
            long long b = a[i - 1] + 1;
            ans += b - a[i];
            a[i] = b;
        }
    }

    cout << ans;
}
