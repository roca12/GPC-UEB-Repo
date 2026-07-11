/*
 * Autor: Miguel Lopez
 * Problema: Concatenation of Languages
 * Juez online: OnlineJudge
 * Veredicto: Accepted
 * Url: https://vjudge.net/problem/UVA-10887
 */

#include <bits/stdc++.h>
#include <cctype>
#include <cstdio>
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
  int n; cin >> n;
  int cont = 1;
  while(n--) {
      vector<string> a;
      vector<string> b;
      set<string> c;
      int t,v; cin >> t >> v;
      cin.ignore();
      while(t--){
          string z;
          getline(cin, z);
          a.push_back(z);
      }
      while(v--){
          string z ;
          getline(cin, z);
          b.push_back(z);
      }
      for(int i = 0; i < a.size(); i++) {
          for(int j = 0; j < b.size() ; j++) {
              c.insert(a[i]+b[j]);
          }
      }
      
     cout << "Case " << cont << ": " << c.size() << endl;
     cont++;
  }
  return 0;
}
