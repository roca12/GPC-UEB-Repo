/*
 * Autor: Miguel Lopez
 * Problema: Primary Register
 * Juez online: Kattis
 * Veredicto: Accepted
 * Url: https://open.kattis.com/contests/adiosd/problems/register
 */

#include <bits/stdc++.h>
#define ln "\n"
#define vi vector<int> 
#define vl vector<ll> 
#define add(x) .push_back(x);
#define debug(x) cerr << x << "<------------ DEBUG" << ln;
typedef long long int ll;
const int INF = int(1e9) + 5;
using namespace std;
void init_code() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main() {
    init_code();
    vi precal = {2,3,5,7,11,13,17,19};
    vi vec(8);
    for(int &i : vec){
        cin >> i;
    }
    ll aux = 0, aux2 = 1;
    for(int i = 0; i < vec.size() ; i++) {
        aux+= vec[i] * aux2;
        aux2 *= precal[i];
    }
    cout << aux2 - 1 - aux << ln;
}
