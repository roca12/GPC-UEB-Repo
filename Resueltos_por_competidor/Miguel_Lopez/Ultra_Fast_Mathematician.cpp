/*
 * Autor: Miguel Lopez
 * Problema: Ultra-Fast Mathematician
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/61/A
 */

#include <bits/stdc++.h>
#include <cctype>
#include <cstdio>
#include <ios>
#include <string>
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
int main(){
  init_code();  
   string a,b; cin >> a >> b;
   string e = "";
   for(int i = 0; i < a.size() ; i++) {
      int d = a[i] - '0';
      int f = b[i] - '0';
      if(d > f) {
      e+=d + '0';
      }
      else if (f > d){
         e+=f + '0';
      }
      else {
         e+="0";
      }
   }
   cout << e << endl;
   return 0;
}
