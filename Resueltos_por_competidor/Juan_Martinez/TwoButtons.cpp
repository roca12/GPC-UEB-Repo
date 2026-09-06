/*
 * Autor: Juan Martinez
 * Problema: Two Buttons (1213B)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/520/B
 * Difficulty: 1400
 */
#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define ln "\n"

int main() {
    int n, m;
    cin>>n>>m;
    queue<pair<ll,ll>> q;
    vector<bool> visited((2*max(n,m)) + 1);
    visited[n] = 1;
    q.push({n*2, 1});
    q.push({n-1, 1});
    while(!q.empty()) {
        pair<ll,ll> act = q.front();
        q.pop();
        if(act.first == m) {
            cout<<act.second<<ln;
            break;
        }
        if(act.first <= 2*max(n,m) && act.first >= 1 && !visited[act.first]) {
            q.push({act.first*2, act.second+1});
            q.push({act.first-1, act.second+1});
            visited[act.first] = 1;
        }
    }
}
