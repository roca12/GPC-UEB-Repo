/*
 * Autor: Juan Martinez
 * Problema: Transformation: from A to B (727A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/727/problem/A
 * Difficulty: 1000
 */
#include <bits/stdc++.h>
using namespace std;
#define ln "\n"
typedef long long int ll;

vector<ll> res;
vector<bool> visited(1e9+1, 0);
ll a, b;

bool dfs(ll x) {
    if(x == b) {
        res.push_back(x);
        return 1;
    }
    if(x > b) return 0;
    if(!visited[x]) {
        visited[x] = 1;
        //cout<<x<<ln;
        if(dfs((2*x)) || dfs(((10*x) + 1))) {
            res.push_back(x);
            //cout<<"agregando "<<x<<ln;
            return 1;
        }
    }
    return 0;
}
int main() {
    cin>>a>>b;
    if(!dfs(a)) cout<<"NO"<<ln;
    else {
        cout<<"YES"<<ln;
        cout<<res.size()<<ln;
        for(ll i = (ll)res.size()-1; i >= 0; i--) {
            cout<<res[i]<<" ";
        }
    }
}
