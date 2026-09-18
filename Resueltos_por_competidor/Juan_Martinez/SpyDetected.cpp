/*
 * Autor: Juan Martinez
 * Problema: Spy Detected! (1512A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/1512/problem/A
 * Difficulty: 800
 */
#include <bits/stdc++.h>
using namespace std;

#define ln "\n"
#define vvi vector<vector<int>>
#define vi vector<int>
#define vb vector<bool>
#define pii pair<int,int>
#define vpii vector<pii>
#define add(x) push_back(x)

int main() {
	int t, n, aux; cin>>t;
    while(t--) {
        cin>>n;
        map<int,pii> mapa;
        for(int i = 0; i < n; i++) {
            cin>>aux;
            mapa[aux].first++;
            mapa[aux].second = i+1;
        }
        for(auto [val, p]: mapa) {
            if(p.first == 1) {
                cout<<p.second<<ln;
            }
        }
    }
}
