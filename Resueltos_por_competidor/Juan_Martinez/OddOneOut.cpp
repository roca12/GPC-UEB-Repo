/*
 * Autor: Juan Martinez
 * Problema: Odd One Out (1915A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1915/A
 * Difficulty: 800
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
const ll INF = 1e9;

int main() {
	int t, a, b, c; cin>>t;
    while(t--) {
        cin>>a>>b>>c;
        if(a != b) {
            if(b == c) cout<<a<<ln;
            else cout<<b<<ln;
        } else {
            cout<<c<<ln;
        }
    }
}
