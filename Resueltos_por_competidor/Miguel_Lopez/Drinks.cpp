/*
 * Autor: Miguel Lopez
 * Problema:  Drinks
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/200/B
 */

#include <bits/stdc++.h>
#include <cctype>
#include <cstdio>
#include <iomanip>
#include <ios>
typedef long long int ll;
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
   int t; cin >> t;
   double c = 0;
   for(int i = 0; i < t ; i++) {
      double  n; cin >> n;
      c+=(n/t);
   }  
   cout << fixed << setprecision(12) << c <<  endl; 
   return 0;
}



 
