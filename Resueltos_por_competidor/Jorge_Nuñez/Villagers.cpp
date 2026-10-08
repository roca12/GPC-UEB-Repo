/*
 * Autor: Jorge Nuñez
 * Problema: Villagers
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2133/B
 */

#include <bits/stdc++.h>
#define ln "\n"
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll , ll>>
#define dbg(x) cerr << x << " <-----" << "DEBUG" << ln;
using namespace std;
typedef long long int ll;
#define all(x) (x).begin(), (x).end()
#define add(x) push_back(x)
const int INF = 1e9;
int main() {
    ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int c;
    cin>>c;

    while(c--){
        int n;cin>>n;
       vll a(n);
       for (int i =0; i<n; i++) {
       cin>>a[i];
       }
       sort(all(a));
       ll s=0;

       for (int i = n - 1; i >= 0; i -= 2) {
            s += a[i];
        }
       cout<<s<<ln;
     

    }
}