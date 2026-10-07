/*
 * Autor: Jorge Nuñez
 * Problema: Koshary
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2227/A
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
        int x,y;
        cin>>x>>y;
        if(x % 2 == 1 && y % 2 == 1){
    cout << "NO" << ln;
    }else{
    cout << "YES" << ln;
    }
    }
}
       
