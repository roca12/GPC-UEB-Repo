/*
 * Autor: Juan Martinez
 * Problema: Automatic Answer
 * Juez online: Vjudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/contest/852841#problem/A
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
	ll t, n;
    cin>>t;
    string res;
    while(t--) {
        cin>>n;
        res = "";
        stringstream ss;
        n = ((((((n*567)/9)+7492)*235)/47)-498);
        ss<<n;
        res = ss.str();
        cout<<res[res.size()-2]<<ln;
    }
}
