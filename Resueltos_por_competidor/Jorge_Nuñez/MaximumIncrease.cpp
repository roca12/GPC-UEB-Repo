/*
 * Autor: Jorge Nuñez
 * Problema: Maximum Increase
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/702/A
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
	vector<int> dp(n);
	int ans=0;

	for(int i=0 ; i<n; i++) {
		cin>>a[i];
	}
	for(int i =0; i<n; i++) {
		if(i==0) {
			dp[0]=1;
		} else {
			if (a[i] > a[i - 1]) {
				dp[i] = dp[i - 1] + 1;
			} else {
				dp[i] = 1;
			}
		}
		ans = max(ans, dp[i]);
	}
	cout<<ans<<endl;


}