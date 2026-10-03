/*
 * Autor: Juan Martinez
 * Problema: SauSaGe Bank (2269A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2269/A
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
const int INF = 1e9;

int main() {
    int t, n, k, res; cin>>t; 
    while(t--) {
        cin>>n>>k;
        res = 1;
        k--;
        while(n > k) {
            res <<= 1;
            n--;
        }
        res += n * 2;
        cout<<res<<ln;
    }
}
