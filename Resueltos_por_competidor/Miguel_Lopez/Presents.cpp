/*
 * Autor: Miguel Lopez
 * Problema: Presents
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/136/A
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
   vector<pair<int, int>> aver;
   for(int i = 0; i < t; i++) {
      int n; cin >> n;
      aver.push_back({n,i+1});
   }
   sort(aver.begin(), aver.end());
   for(int i = 0; i < aver.size(); i++) {
      cout << aver[i].second << " ";
   }
   return 0;
}




