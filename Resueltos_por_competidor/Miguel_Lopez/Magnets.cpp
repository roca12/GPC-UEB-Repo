/*
 * Autor: Miguel Lopez
 * Problema: Magnets
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/344/A
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
   int t, cont = 0; cin >> t;
   string a,b;
   for(int i = 0; i < t ; i++) {
      cin >> b;
      if(i == 0 || a != b) {
         cont++;
      }
      a = b;
      
   }
   cout << cont << endl;
   return 0;
}




