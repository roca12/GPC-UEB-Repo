
/*
 * Autor: Miguel Lopez
 * Problema: Calculating Functions
 * Juez online: CodeForces
 * Veredicto: Accepted 
 * URL: https://codeforces.com/problemset/problem/486/A
 */

#include <bits/stdc++.h>
#include <cctype>
#include <cstdio>
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
   ll t; cin >> t;
   ll cont = 0;
   if(t % 2 == 0) {
      cont = t/2;
   } 
   else {
      cont = (t/-2) - 1;
   }
   cout << cont << endl;
   return 0;
 }




