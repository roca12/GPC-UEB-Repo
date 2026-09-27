/*
 * Autor: Juan Martinez
 * Problema: Lucky Thief
 * Juez online: Vjudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/contest/852841#problem/D
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

ll ec(ll x) {
    return (x*(x+1))/2;
}

int main() {
	ll t, n, m; cin>>t;
    while(t--) {
        cin>>n>>m;
        cout<<(ec(m-1) - ec((m-n)-1))<<ln;
    }
}
