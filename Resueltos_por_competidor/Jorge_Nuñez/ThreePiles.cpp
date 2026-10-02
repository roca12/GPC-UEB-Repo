/*
 * Autor: Jorge Nuñez
 * Problema: Three Piles
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/2266/B
 */
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

#define all(x) (x).begin(), (x).end()

const ll MOD = 1e9 + 7;
const int INF = 1e9;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

    int c ;
    
    cin>>c;
    while(c--){
      ll a,b,c;
      cin>>a>>b>>c;
      ll r =max(abs(a+c-b),abs(a-b));
      cout<<r<<endl;
      }

    }