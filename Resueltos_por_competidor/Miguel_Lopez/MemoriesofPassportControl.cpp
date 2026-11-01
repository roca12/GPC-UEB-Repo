/*
 * Autor: Miguel Lopez
 * Problema: Memories of Passport Control
 * Juez online: Kattis
 * Veredicto: Accepted
 * Url: https://open.kattis.com/problems/memoriesofpassportcontrol
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
    //init_code();
    int k, s;
    cin >> k >> s;
    cout <<(s / k) + (s % k) << endl;
}
