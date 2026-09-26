/*
 * Autor: Juan Martinez
 * Problema: Fashionable Array (2267B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/2267/problem/B
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define ln "\n"
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define vi vector<int>
#define vl vector<ll>
#define vb vector<bool>
#define pii pair<int,int>
#define pl pair<ll,ll>
#define vpii vector<pii>
#define vpl vector<pl>
#define add(x) push_back(x)
const int INF = 1e9;

int main() {
	int t, n, aux, act, amount; cin>>t;
    vector<int> res;
    while(t--) {
        res.clear();
        vi mapa(101, -1);
        cin>>n;
        for(int i = 0; i < n; i++) {
            cin>>aux;
            mapa[aux]++;
        }
        while(res.size() != n) {
            for(int i = 100; i > 0; i--) {
                if(mapa[i] != -1) {
                    res.add(i);
                    mapa[i]--;
                }
            }
        }
        for(int i: res) cout<<i<<" ";
        cout<<ln;
    }
}
