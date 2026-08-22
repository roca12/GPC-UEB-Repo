/*
 * Autor: Miguel Lopez
 * Problema: Bachet's Game
 * Juez online: uvaHunt
 * Veredicto: Accepted
 * Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1345
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
    int x,n;
    while(cin >> x) {
        cin >> n;
        vector<bool> dp(x+1);
    	vector<ll> pos(n);
        for(ll i = 0; i < n; i++){
        	cin >> pos[i];
        	dp[pos[i]] = true;
        	//cout << dp[pos[i]] << endl;
        }
        ll diff = 0;
        for(ll i = 1; i < (int)dp.size(); i++) {
        	for(ll j = 0; j < (int)pos.size(); j++) {
        		diff = i - pos[j];
        		if(diff < 0) {
        			continue;
        		}
        		if(!dp[diff]) {
        		dp[i] = true;
        		//cout << diff << " " << i << endl;
        		break;
        		}
        	}
        }
        if(dp[x]) cout << "Stan wins" << endl;
        else cout << "Ollie wins" << endl;
    }
}
// 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21
//   +   +   +   + + +                                   *   
